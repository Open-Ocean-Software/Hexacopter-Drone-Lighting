
#include "Presets/Bounce.h"
#include "Registers.h"

#include <math.h>

void Preset_Bounce_Handler (double t)
{
    static const double d = PRESET_ALERT_DURATION;
    double y = d * abs(sin(3 * M_PI * pow(t, 2)) / (2.6133 * t));
    unsigned char code = (1 << ((int)round(y * 8.0) - 1));

    Reg_LightStripsERed_Set(0xFF);
    Reg_LightStripsEGreen_Set(code);
    Reg_LightStripsEBlue_Set(0xFF);
    Reg_LightStripsBRed_Set(code);
    Reg_LightStripsBGreen_Set(code);
    Reg_LightStripsBBlue_Set(0xFF);
}
