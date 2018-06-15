
#include "Presets/Alert.h"
#include "Registers.h"

void Preset_Alert_Handler (double t)
{
    static const double d = PRESET_ALERT_DURATION;
    static const int cycles = 3;
    static const double period = d / (double)cycles;

    if ((int)(t / (period / 2.0)) % 2 == 0) {
        Reg_LightStripsBRed_Set(0xAA);
        Reg_LightStripsBGreen_Set(0xAA);
    } else {
        Reg_LightStripsBRed_Set(0xFF);
        Reg_LightStripsBGreen_Set(0xFF);
    }

    Reg_LightStripsERed_Set(0xFF);
    Reg_LightStripsEGreen_Set(0xFF);
    Reg_LightStripsEBlue_Set(0x00);
    Reg_LightStripsBBlue_Set(0x00);
    Reg_StatNotifyR_Set(0xFF);
    Reg_StatNotifyG_Set(0xFF);
    Reg_StatNotifyB_Set(0x00);
}
