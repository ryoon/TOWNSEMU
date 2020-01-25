#include "townsio.h"



/* virtual */ void FMTowns::IOWriteByte(unsigned int ioport,unsigned int data)
{
}
/* virtual */ void FMTowns::IOWriteWord(unsigned int ioport,unsigned int data)
{
	Device::IOWriteWord(ioport,data);
}
/* virtual */ void FMTowns::IOWriteDword(unsigned int ioport,unsigned int data)
{
	Device::IOWriteDword(ioport,data);
}
/* virtual */ unsigned int FMTowns::IOReadByte(unsigned int ioport)
{
	switch(ioport)
	{
	case TOWNSIO_MACHINE_ID_LOW://         0x30
		switch(townsType)
		{
		case TOWNSTYPE_1_2F: // 1F,2F
			return 0x01; // [2] pp.775
		case TOWNSTYPE_2_MX: // MA,ME,Fresh
			return 0x02; // [2] pp.826
		}
		break;
	case TOWNSIO_MACHINE_ID_HIGH://=        0x31,
		switch(townsType)
		{
		case TOWNSTYPE_1_2F: // 1F,2F
			return 0x02; // [2] pp.775
		case TOWNSTYPE_2_MX: // MA,ME,Fresh
			return 0x0C; // [2] pp.826
		}
		break;


	case TOWNSIO_FREERUN_TIMER_LOW ://0x26,
		return state.townsTime&0xff;
	case TOWNSIO_FREERUN_TIMER_HIGH://0x28,
		return (state.townsTime>>8)&0xff;
	}
	return 0xff;
}
/* virtual */ unsigned int FMTowns::IOReadWord(unsigned int ioport)
{
	switch(ioport)
	{
	case TOWNSIO_FREERUN_TIMER:// 0x26
		return state.townsTime&0xffff;
	}
	return Device::IOReadWord(ioport);
}
/* virtual */ unsigned int FMTowns::IOReadDword(unsigned int ioport)
{
	return Device::IOReadWord(ioport);
}
