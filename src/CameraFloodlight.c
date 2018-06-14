
#include "Components/PWM/CameraFloodlight.h"
#include "Helpers/PWMHelper.h"

void Handler_FloodlightCamera (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
