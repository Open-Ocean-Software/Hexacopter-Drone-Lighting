
#include "Presets.h"
#include "Registers.h"

void Preset_Danger_Handler (double t)
{
    static const double period = 0.5;
    if ((int)(t / (period / 2.0)) % 2 == 0) {
        Reg_LightStripsBRed_Set(0x55);
        Reg_CamLight_Set(0x00);
        Reg_LandLight_Set(0x00);

    } else {
        Reg_LightStripsBRed_Set(0xAA);
        Reg_CamLight_Set(0xFF);
        Reg_LandLight_Set(0xFF);
    }

    Reg_LightStripsERed_Set(0xFF);
    Reg_LightStripsEGreen_Set(0xFF);
    Reg_LightStripsEBlue_Set(0xFF);
    Reg_LightStripsBGreen_Set(0x00);
    Reg_LightStripsBBlue_Set(0x00);
    Reg_StatNotifyR_Set(0xFF);
    Reg_StatNotifyG_Set(0x00);
    Reg_StatNotifyB_Set(0x00);
}
