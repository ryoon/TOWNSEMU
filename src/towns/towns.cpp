#include <iostream>

#include "cpputil.h"
#include "towns.h"


void FMTowns::State::PowerOn(void)
{
	Reset();
	townsTime=0;
	freq=FREQUENCY_DEFAULT;
}
void FMTowns::State::Reset(void)
{
	clockBalance=0;
}


////////////////////////////////////////////////////////////


FMTowns::FMTowns()
{
	abort=false;
	allDevices.push_back(&ioRAM);
	allDevices.push_back(&physMem);

	physMem.SetMainRAMSize(4*1024*1024);

	physMem.SetVRAMSize(1024*1024);
	physMem.SetSpriteRAMSize(512*1024);
	physMem.SetWaveRAMSize(64*1024);

	io.AddDevice(&ioRAM,0x3000,0x3FFF);

	mainRAMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&mainRAMAccess,0x00000000,0x000BFFFF);
	mem.AddAccess(&mainRAMAccess,0x000F0000,0x000F7FFF);

	mainRAMorFMRVRAMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&mainRAMorFMRVRAMAccess,0x000C0000,0x000CFFFF);

	dicROMandDicRAMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&dicROMandDicRAMAccess,0x000D0000,0x000EFFFF);
	mem.AddAccess(&dicROMandDicRAMAccess,0xC2140000,0xC2141FFF);

	mainRAMorSysROMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&mainRAMorSysROMAccess,0x000F8000,0x000FFFFF);

	if(0x00100000<physMem.state.RAM.size())
	{
		mem.AddAccess(&mainRAMAccess,0x00100000,(unsigned int)physMem.state.RAM.size()-1);
	}

	VRAMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&VRAMAccess,0x80000000,0x8007FFFF);
	mem.AddAccess(&VRAMAccess,0x80100000,0x8017FFFF);

	spriteRAMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&spriteRAMAccess,0x81000000,0x8101FFFF);

	osROMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&osROMAccess,0xC2000000,0xC208FFFF);

	waveRAMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&waveRAMAccess,0xC2200000,0xC2200FFF);

	sysROMAccess.SetPhysicalMemoryPointer(&physMem);
	mem.AddAccess(&sysROMAccess,0xFFFC0000,0xFFFFFFFF);

	// Free-run counter since FM TOWNS 2UG [2] pp.801
	// Didn't it exist since the first model FM TOWNS 2?
	// I vaguely rember I used something similar when I wrote my first flight simulator 
	// submitted to Japan National High School Students' Programming Contest.
	// FM TOWNS 2UG didn't exist then.
	// I'm positive that I was using the second-generation FM TOWNS then.
	// I'll check if I can find the source code from my old backups.
	io.AddDevice(this,0x26,0x27);

	PowerOn();
}

bool FMTowns::CheckAbort(void) const
{
	bool ab=false;
	if(true==abort)
	{
		std::cout << "FMTowns:" << abortReason << std::endl;
		ab=true;
	}
	if(true==cpu.abort)
	{
		std::cout << cpu.DeviceName() << ':' << cpu.abortReason << std::endl;
		ab=true;
	}
	if(true==physMem.abort)
	{
		std::cout << physMem.DeviceName() << ':' <<  physMem.abortReason << std::endl;
		ab=true;
	}
	for(auto devPtr : allDevices)
	{
		if(true==devPtr->abort)
		{
			std::cout << devPtr->DeviceName() << ':' <<  devPtr->abortReason << std::endl;
			ab=true;
		}
	}
	return ab;
}

bool FMTowns::LoadROMImages(const char dirName[])
{
	if(true!=physMem.LoadROMImages(dirName))
	{
		abort=true;
		abortReason="Unable to load ROM images.";
		return false;
	}
	return true;
}

void FMTowns::PowerOn(void)
{
	state.PowerOn();
	cpu.PowerOn();
	for(auto devPtr : allDevices)
	{
		devPtr->PowerOn();
	}
}
void FMTowns::Reset(void)
{
	state.Reset();
	cpu.Reset();
	for(auto devPtr : allDevices)
	{
		devPtr->Reset();
	}
}

unsigned int FMTowns::RunOneInstruction(void)
{
	auto clocksPassed=cpu.RunOneInstruction(mem,io);
	state.clockBalance+=clocksPassed;
	if(state.freq<=state.clockBalance)
	{
		state.townsTime+=(state.clockBalance/state.freq);
		state.clockBalance%=state.freq;
	}
	return clocksPassed;
}


////////////////////////////////////////////////////////////


unsigned int FMTowns::FetchByteCS_EIP(int offset) const
{
	return cpu.FetchInstructionByte(offset,mem);
}

i486DX::Instruction FMTowns::FetchInstruction(void) const
{
	return cpu.FetchInstruction(mem);
}
std::vector <std::string> FMTowns::GetStackText(unsigned int numBytes) const
{
	std::vector <std::string> text;
	for(unsigned int offsetHigh=0; offsetHigh<numBytes; offsetHigh+=16)
	{
		std::string line;
		line="SS+"+cpputil::Uitox(offsetHigh)+":";
		for(unsigned int offsetLow=0; offsetLow<16 && offsetHigh+offsetLow<numBytes; ++offsetLow)
		{
			line+=cpputil::Ubtox(cpu.FetchByte(cpu.state.SS(),cpu.state.ESP()+offsetHigh+offsetLow,mem));
			line.push_back(' ');
		}
		text.push_back(line);
	}
	return text;
}
void FMTowns::PrintStack(unsigned int numBytes) const
{
	for(auto s : GetStackText(numBytes))
	{
		std::cout << s << std::endl;
	}
}
