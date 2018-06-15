
#include "Components.h"
#include "Helpers/PWMHelper.h"

void Handler_FloodlightLanding (struct Component *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
