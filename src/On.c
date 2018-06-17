
#include "Presets.h"
#include "Registers.h"

void Preset_On_Handler (double t)
{
    Reg_LightStripsERed_Set(0xFF);
    Reg_LightStripsEGreen_Set(0xFF);
    Reg_LightStripsEBlue_Set(0xFF);
    Reg_LightStripsBRed_Set(0xFF);
    Reg_LightStripsBGreen_Set(0xFF);
    Reg_LightStripsBBlue_Set(0xFF);
    Reg_StatNotifyR_Set(0xFF);
    Reg_StatNotifyG_Set(0xFF);
    Reg_StatNotifyB_Set(0xFF);
    Reg_CamLight_Set(0xFF);
    Reg_LandLight_Set(0xFF);
    Reg_CamLevelLaser_Set(0xFF);
    Reg_CamPointLaser_Set(0xFF);
    Reg_ScanLaser_Set(0xFF);
}
