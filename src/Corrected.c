
#include "Presets.h"
#include "Registers.h"

#include <math.h>

void Prest_Corrected_Handler (double t)
{
    static const double d = PRESET_CORRECTED_DURATION;
    static const double progTime = d * 0.75;

    if (t <= progTime) {
        unsigned char index = (int)round((t / progTime) * 8.0);
        unsigned char code = 0x00;
        for (unsigned char i = index - 1; i >= 0; i--) {
            code |= (1 << i);
        }
        Reg_LightStripsERed_Set(0x00);
        Reg_LightStripsEGreen_Set(code);
        Reg_LightStripsEBlue_Set(0xFF);
        Reg_LightStripsBRed_Set(0x00);
        Reg_LightStripsBGreen_Set(0x00);
        Reg_LightStripsBBlue_Set(code);
    } else {
        Reg_LightStripsERed_Set(0x00);
        Reg_LightStripsEGreen(0xFF);
        Reg_LightStripsEBlue_Set(0x00);
        Reg_LightStripsBRed_Set(0x00);
        Reg_LightStripsBGreen(0xAA);
        Reg_LightStripsBBlue_Set(0x00);
    }
    Reg_StatNotifyR_Set(0x00);
    Reg_StatNotifyG_Set(0xFF);
    Reg_StatNotifyB_Set(0x00);
}
