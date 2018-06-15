
#include "Presets.h"
#include "Registers.h"

void Preset_Warning_Handler (double t)
{
    static const double d = PRESET_WARNING_DURATION;
    static const int cycles = 3;
    static const double period = d / (double)cycles;
    static const unsigned char redMask = 0xFF;
    static const unsigned char greenMask = 0xAA;
    double cT = t - (double)((int)((period / 2.0) * (int)(t / (period / 2.0))));
    double prog = cT / (period / 2.0);
    unsigned char index = (int)round((cT / (period / 2.0)) * 8.0);
    if ((int)(t / (period / 2.0)) % 2 != 0) {
        index = 8 - index;
    }
    unsigned char code = 0x00;
    for (unsigned char i = index - 1; i >= 0; i--) {
        code |= (1 << i);
    }
    Reg_LightStripsERed_Set(code);
    Reg_LightStripsEGreen_Set(code);
    Reg_LightStripsEBlue_Set(0xFF);
    Reg_LightStripsBRed_Set(code & redMask);
    Reg_LightStripsBGreen_Set(code & greenMask);
    Reg_LightStripsBBlue_Set(0x00);
}
