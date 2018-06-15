
#include "Presets/Flash.h"
#include "Registers.h"

void Preset_Flash_Handler (double t)
{
    static const double d = PRESET_FLASH_DURATION;
    static const int cycles = 3;
    static const double period = d / (double)cycles;

    if ((int)(t / (period / 2.0)) % 2 == 0) {
        Reg_LightStripsEGreen_Set(0x00);
        Reg_LightStripsBBlue_Set(0x00);
    } else {
        Reg_LightStripsEGreen_Set(0xFF);
        Reg_LightStripsBBlue_Set(0xFF);
    }

    Reg_LightStripsERed_Set(0x00);
    Reg_LightStripsEBlue_Set(0xFF);
    Reg_LightStripsBRed_Set(0x00);
    Reg_LightStripsBGreen_Set(0x00);
}
