
#include "Presets.h"
#include "Registers.h"

void Preset_Off_Handler (double t)
{
    Reg_LightStripsERed_Set(0x00);
    Reg_LightStripsEGreen_Set(0x00);
    Reg_LightStripsEBlue_Set(0x00);
    Reg_LightStripsBRed_Set(0x00);
    Reg_LightStripsBGreen_Set(0x00);
    Reg_LightStripsBBlue_Set(0x00);
    Reg_StatNotifyR_Set(0x00);
    Reg_StatNotifyG_Set(0x00);
    Reg_StatNotifyB_Set(0x00);
    Reg_CamLight_Set(0x00);
    Reg_LandLight_Set(0x00);
    Reg_CamLevelLaser_Set(0x00);
    Reg_CamPointLaser_Set(0x00);
    Reg_ScanLaser_Set(0x00);
}
