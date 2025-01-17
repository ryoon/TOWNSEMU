#include <map>
#include <string>
#include "townsdef.h"

std::map <unsigned int,std::string> FMTownsIOMap(void)
{
	std::map <unsigned int,std::string> ioMap;
	ioMap[TOWNSIO_PIC_PRIMARY_ICW1]="PIC_PRIMARY_ICW1";
	ioMap[TOWNSIO_PIC_PRIMARY_ICW2_3_4_OCW]="PIC_PRIMARY_ICW2_3_4_OCW";
	ioMap[TOWNSIO_PIC_SECONDARY_ICW1]="PIC_SECONDARY_ICW1";
	ioMap[TOWNSIO_PIC_SECONDARY_ICW2_3_4_OCW]="PIC_SECONDARY_ICW2_3_4_OCW";
	ioMap[TOWNSIO_RESET_REASON]="RESET_REASON";
	ioMap[TOWNSIO_POWER_CONTROL]="POWER_CONTROL";
	ioMap[TOWNSIO_FREERUN_TIMER     ]="FREERUN_TIMER     ";
	ioMap[TOWNSIO_FREERUN_TIMER_LOW ]="FREERUN_TIMER_LOW ";
	ioMap[TOWNSIO_FREERUN_TIMER_HIGH]="FREERUN_TIMER_HIGH";
	ioMap[TOWNSIO_MACHINE_ID_LOW]="MACHINE_ID_LOW";
	ioMap[TOWNSIO_MACHINE_ID_HIGH]="MACHINE_ID_HIGH";
	ioMap[TOWNSIO_SERIAL_ROM_CTRL]="SERIAL_ROM_CTRL";
	ioMap[TOWNSIO_TIMER0_COUNT]="TIMER0_COUNT";
	ioMap[TOWNSIO_TIMER1_COUNT]="TIMER1_COUNT";
	ioMap[TOWNSIO_TIMER2_COUNT]="TIMER2_COUNT";
	ioMap[TOWNSIO_TIMER_0_1_2_CTRL]="TIMER_0_1_2_CTRL";
	ioMap[TOWNSIO_TIMER3_COUNT]="TIMER3_COUNT";
	ioMap[TOWNSIO_TIMER4_COUNT]="TIMER4_COUNT";
	ioMap[TOWNSIO_TIMER5_COUNT]="TIMER5_COUNT";
	ioMap[TOWNSIO_TIMER_3_4_5_CTRL]="TIMER_3_4_5_CTRL";
	ioMap[TOWNSIO_TIMER_INT_CTRL_INT_REASON]="TIMER_INT_CTRL_INT_REASON";
	ioMap[TOWNSIO_TIMER_1US_WAIT]="TIMER_1US_WAIT";
	ioMap[TOWNSIO_RTC_DATA]="RTC_DATA";
	ioMap[TOWNSIO_RTC_COMMAND]="RTC_COMMAND";
	ioMap[TOWNSIO_DMAC_INITIALIZE]="DMAC_INITIALIZE";
	ioMap[TOWNSIO_DMAC_CHANNEL]="DMAC_CHANNEL";
	ioMap[TOWNSIO_DMAC_COUNT_LOW]="DMAC_COUNT_LOW";
	ioMap[TOWNSIO_DMAC_COUNT_HIGH]="DMAC_COUNT_HIGH";
	ioMap[TOWNSIO_DMAC_ADDRESS_LOWEST]="DMAC_ADDRESS_LOWEST";
	ioMap[TOWNSIO_DMAC_ADDRESS_MIDLOW]="DMAC_ADDRESS_MIDLOW";
	ioMap[TOWNSIO_DMAC_ADDRESS_MIDHIGH]="DMAC_ADDRESS_MIDHIGH";
	ioMap[TOWNSIO_DMAC_ADDRESS_HIGHEST]="DMAC_ADDRESS_HIGHEST";
	ioMap[TOWNSIO_DMAC_DEVICE_CONTROL_LOW]="DMAC_DEVICE_CONTROL_LOW";
	ioMap[TOWNSIO_DMAC_DEVICE_CONTROL_HIGH]="DMAC_DEVICE_CONTROL_HIGH";
	ioMap[TOWNSIO_DMAC_MODE_CONTROL]="DMAC_MODE_CONTROL";
	ioMap[TOWNSIO_DMAC_STATUS]="DMAC_STATUS";
	ioMap[TOWNSIO_DMAC_TEMPORARY_REG_LOW]="DMAC_TEMPORARY_REG_LOW";
	ioMap[TOWNSIO_DMAC_TEMPORARY_REG_HIGH]="DMAC_TEMPORARY_REG_HIGH";
	ioMap[TOWNSIO_DMAC_REQUEST]="DMAC_REQUEST";
	ioMap[TOWNSIO_DMAC_MASK]="DMAC_MASK";
	ioMap[TOWNSIO_FDC_STATUS_COMMAND]="FDC_STATUS_COMMAND";
	ioMap[TOWNSIO_FDC_TRACK]="FDC_TRACK";
	ioMap[TOWNSIO_FDC_SECTOR]="FDC_SECTOR";
	ioMap[TOWNSIO_FDC_DATA]="FDC_DATA";
	ioMap[TOWNSIO_FDC_DRIVE_STATUS_CONTROL]="FDC_DRIVE_STATUS_CONTROL";
	ioMap[TOWNSIO_FDC_DRIVE_SELECT]="FDC_DRIVE_SELECT";
	ioMap[TOWNSIO_FDC_FDDV_EXT]="FDC_FDDV_EXT";
	ioMap[TOWNSIO_FDC_DRIVE_SWITCH]="FDC_DRIVE_SWITCH";
	ioMap[TOWNSIO_FMR_RESOLUTION]="FMR_RESOLUTION";
	ioMap[TOWNSIO_FMR_VRAM_OR_MAINRAM]="FMR_VRAM_OR_MAINRAM";
	ioMap[TOWNSIO_SPRITE_ADDRESS]="SPRITE_ADDRESS";
	ioMap[TOWNSIO_SPRITE_DATA]="SPRITE_DATA";
	ioMap[TOWNSIO_VRAMACCESSCTRL_ADDR]="VRAMACCESSCTRL_ADDR";
	ioMap[TOWNSIO_VRAMACCESSCTRL_DATA_LOW]="VRAMACCESSCTRL_DATA_LOW";
	ioMap[TOWNSIO_VRAMACCESSCTRL_DATA_HIGH]="VRAMACCESSCTRL_DATA_HIGH";
	ioMap[TOWNSIO_CRTC_ADDRESS]="CRTC_ADDRESS";
	ioMap[TOWNSIO_CRTC_DATA_LOW]="CRTC_DATA_LOW";
	ioMap[TOWNSIO_CRTC_DATA_HIGH]="CRTC_DATA_HIGH";
	ioMap[TOWNSIO_VIDEO_OUT_CTRL_ADDRESS]="VIDEO_OUT_CTRL_ADDRESS";
	ioMap[TOWNSIO_VIDEO_OUT_CTRL_DATA]="VIDEO_OUT_CTRL_DATA";
	ioMap[TOWNSIO_DPMD_SPRITEBUSY_SPRITEPAGE]="DPMD_SPRITEBUSY_SPRITEPAGE";
	ioMap[TOWNSIO_MX_HIRES]="MX_HIRES";
	ioMap[TOWNSIO_MX_VRAMSIZE]="MX_VRAMSIZE";
	ioMap[TOWNSIO_MX_IMGOUT_ADDR_LOW]="MX_IMGOUT_ADDR_LOW";
	ioMap[TOWNSIO_MX_IMGOUT_ADDR_HIGH]="MX_IMGOUT_ADDR_HIGH";
	ioMap[TOWNSIO_MX_IMGOUT_D0]="MX_IMGOUT_D0";
	ioMap[TOWNSIO_MX_IMGOUT_D1]="MX_IMGOUT_D1";
	ioMap[TOWNSIO_MX_IMGOUT_D2]="MX_IMGOUT_D2";
	ioMap[TOWNSIO_MX_IMGOUT_D3]="MX_IMGOUT_D3";
	ioMap[TOWNSIO_SYSROM_DICROM]="SYSROM_DICROM";
	ioMap[TOWNSIO_DICROM_BANK]="DICROM_BANK";
	ioMap[TOWNSIO_MEMCARD_STATUS]="MEMCARD_STATUS";
	ioMap[TOWNSIO_MEMCARD_BANK]="MEMCARD_BANK";
	ioMap[TOWNSIO_MEMCARD_ATTRIB]="MEMCARD_ATTRIB";
	ioMap[TOWNSIO_CDROM_MASTER_CTRL_STATUS]="CDROM_MASTER_CTRL_STATUS";
	ioMap[TOWNSIO_CDROM_COMMAND_STATUS]="CDROM_COMMAND_STATUS";
	ioMap[TOWNSIO_CDROM_PARAMETER_DATA]="CDROM_PARAMETER_DATA";
	ioMap[TOWNSIO_CDROM_TRANSFER_CTRL]="CDROM_TRANSFER_CTRL";
	ioMap[TOWNSIO_CDROM_SUBCODE_STATUS]="CDROM_SUBCODE_STATUS";
	ioMap[TOWNSIO_CDROM_SUBCODE_DATA]="CDROM_SUBCODE_DATA";
	ioMap[TOWNSIO_GAMEPORT_A_INPUT]="GAMEPORT_A_INPUT";
	ioMap[TOWNSIO_GAMEPORT_B_INPUT]="GAMEPORT_B_INPUT";
	ioMap[TOWNSIO_GAMEPORT_OUTPUT]="GAMEPORT_OUTPUT";
	ioMap[TOWNSIO_SOUND_MUTE]="SOUND_MUTE";
	ioMap[TOWNSIO_SOUND_STATUS_ADDRESS0]="SOUND_STATUS_ADDRESS0";
	ioMap[TOWNSIO_SOUND_DATA0]="SOUND_DATA0";
	ioMap[TOWNSIO_SOUND_ADDRESS1]="SOUND_ADDRESS1";
	ioMap[TOWNSIO_SOUND_DATA1]="SOUND_DATA1";
	ioMap[TOWNSIO_SOUND_INT_REASON]="SOUND_INT_REASON";
	ioMap[TOWNSIO_SOUND_PCM_INT_MASK]="SOUND_PCM_INT_MASK";
	ioMap[TOWNSIO_SOUND_PCM_INT]="SOUND_PCM_INT";
	ioMap[TOWNSIO_SOUND_PCM_ENV]="SOUND_PCM_ENV";
	ioMap[TOWNSIO_SOUND_PCM_PAN]="SOUND_PCM_PAN";
	ioMap[TOWNSIO_SOUND_PCM_FDL]="SOUND_PCM_FDL";
	ioMap[TOWNSIO_SOUND_PCM_FDH]="SOUND_PCM_FDH";
	ioMap[TOWNSIO_SOUND_PCM_LSL]="SOUND_PCM_LSL";
	ioMap[TOWNSIO_SOUND_PCM_LSH]="SOUND_PCM_LSH";
	ioMap[TOWNSIO_SOUND_PCM_ST]="SOUND_PCM_ST";
	ioMap[TOWNSIO_SOUND_PCM_CTRL]="SOUND_PCM_CTRL";
	ioMap[TOWNSIO_SOUND_PCM_CH_ON_OFF]="SOUND_PCM_CH_ON_OFF";
	ioMap[TOWNSIO_SOUND_SAMPLING_DATA]="SOUND_SAMPLING_DATA";
	ioMap[TOWNSIO_SOUND_SAMPLING_FLAGS]="SOUND_SAMPLING_FLAGS";
	ioMap[TOWNSIO_ELEVOL_1_DATA]="ELEVOL_1_DATA";
	ioMap[TOWNSIO_ELEVOL_1_COM]="ELEVOL_1_COM";
	ioMap[TOWNSIO_ELEVOL_2_DATA]="ELEVOL_2_DATA";
	ioMap[TOWNSIO_ELEVOL_2_COM]="ELEVOL_2_COM";
	ioMap[TOWNSIO_TVRAM_WRITE]="TVRAM_WRITE";
	ioMap[TOWNSIO_WRITE_TO_CLEAR_VSYNCIRQ]="WRITE_TO_CLEAR_VSYNCIRQ";
	ioMap[TOWNSIO_MEMSIZE]="MEMSIZE";
	ioMap[TOWNSIO_KEYBOARD_DATA]="KEYBOARD_DATA";
	ioMap[TOWNSIO_KEYBOARD_STATUS_CMD]="KEYBOARD_STATUS_CMD";
	ioMap[TOWNSIO_KEYBOARD_IRQ]="KEYBOARD_IRQ";
	ioMap[TOWNSIO_RS232C_STATUS_COMMAND]="RS232C_STATUS_COMMAND";
	ioMap[TOWNSIO_RS232C_DATA]="RS232C_DATA";
	ioMap[TOWNSIO_RS232C_INT_REASON]="RS232C_INT_REASON";
	ioMap[TOWNSIO_RS232C_INT_CONTROL]="RS232C_INT_CONTROL";
	ioMap[TOWNSIO_SCSI_DATA]="SCSI_DATA";
	ioMap[TOWNSIO_SCSI_STATUS_CONTROL]="SCSI_STATUS_CONTROL";
	ioMap[TOWNSIO_CMOS_BASE]="CMOS_BASE";
	ioMap[TOWNSIO_CMOS_END]="CMOS_END";
	ioMap[TOWNSIO_ANALOGPALETTE_CODE]="ANALOGPALETTE_CODE";
	ioMap[TOWNSIO_ANALOGPALETTE_BLUE]="ANALOGPALETTE_BLUE";
	ioMap[TOWNSIO_ANALOGPALETTE_RED]="ANALOGPALETTE_RED";
	ioMap[TOWNSIO_ANALOGPALETTE_GREEN]="ANALOGPALETTE_GREEN";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE0]="FMR_DIGITALPALETTE0";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE1]="FMR_DIGITALPALETTE1";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE2]="FMR_DIGITALPALETTE2";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE3]="FMR_DIGITALPALETTE3";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE4]="FMR_DIGITALPALETTE4";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE5]="FMR_DIGITALPALETTE5";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE6]="FMR_DIGITALPALETTE6";
	ioMap[TOWNSIO_FMR_DIGITALPALETTE7]="FMR_DIGITALPALETTE7";
	ioMap[TOWNSIO_HSYNC_VSYNC]="HSYNC_VSYNC";
	ioMap[TOWNSIO_FMR_VRAMMASK]="FMR_VRAMMASK";
	ioMap[TOWNSIO_FMR_VRAMDISPLAYMODE]="FMR_VRAMDISPLAYMODE";
	ioMap[TOWNSIO_FMR_VRAMPAGESEL]="FMR_VRAMPAGESEL";
	ioMap[TOWNSIO_FMR_HSYNC_VSYNC]="FMR_HSYNC_VSYNC";
	ioMap[TOWNSIO_KANJI_JISCODE_HIGH]="KANJI_JISCODE_HIGH";
	ioMap[TOWNSIO_KANJI_JISCODE_LOW]="KANJI_JISCODE_LOW";
	ioMap[TOWNSIO_KANJI_PTN_HIGH]="KANJI_PTN_HIGH";
	ioMap[TOWNSIO_KANJI_PTN_LOW]="KANJI_PTN_LOW";
	ioMap[TOWNSIO_KVRAM_OR_ANKFONT]="KVRAM_OR_ANKFONT";
	ioMap[TOWNSIO_VM_HOST_IF_CMD_STATUS]="VM_HOST_IF_CMD_STATUS";
	ioMap[TOWNSIO_VM_HOST_IF_DATA]="VM_HOST_IF_DATA";
	ioMap[TOWNSIO_VNDRV_APICHECK]="VNDRV_APICHECK";
	ioMap[TOWNSIO_VNDRV_ENABLE]="VNDRV_ENABLE";
	ioMap[TOWNSIO_VNDRV_COMMAND]="VNDRV_COMMAND";
	ioMap[TOWNSIO_VNDRV_AUXCOMMAND]="VNDRV_AUXCOMMAND";
	return ioMap;
}
