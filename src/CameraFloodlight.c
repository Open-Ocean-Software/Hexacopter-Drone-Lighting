
#include "Component.h"
#include "Helpers/PWMHelper.h"

void Handler_FloodlightCamera (struct Component *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
