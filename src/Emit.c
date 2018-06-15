
#include "Presets.h"
#include "Registers.h"

void Preset_Emit_Handler (double t)
{
    static const double d = PRESET_SPIN_DURATION;
    static const int cycles = 7;
    static const double period = d / (double)cycles;
    unsigned char cycleIndex = (unsigned char)(t / period);
    double cT = t - (double)((int)(period * (int)(t / period)));
    double prog = cT / period;
    unsigned char index = (int)round(prog * 8.0);
    unsigned char code = 0x00;
    if (index != 0) {
        code = (1 << (index - 1));
    }

    if (cycleIndex & 0x01) {
        Reg_LightStripsEBlue_Set(code);
        Reg_LightStripsBRed_Set(code);
    } else {
        Reg_LightStripsEBlue_Set(0x00);
        Reg_LightStripsBRed_Set(0x00);
    }
    if (cycleIndex & 0x02) {
        Reg_LightStripsERed_Set(code);
        Reg_LightStripsBGreen_Set(code);
    } else {
        Reg_LightStripsERed_Set(0x00);
        Reg_LightStripsBGreen_Set(0x00);
    }
    if (cycleIndex & 0x04) {
        Reg_LightStripsEGreen_Set(code);
        Reg_LightStripsBBlue_Set(code);
    } else {
        Reg_LightStripsEGreen_Set(0x00);
        Reg_LightStripsBBlue_Set(0x00);
    }
}
