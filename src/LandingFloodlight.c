
#include "Components/PWM/LandingFloodlight.h"
#include "Helpers/PWMHelper.h"

void Handler_FloodlightLanding (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
