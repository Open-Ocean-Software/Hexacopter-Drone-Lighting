
#include "Components.h"
#include "Helpers/PWMHelper.h"

void Handler_LaserCameraPoint (struct Component *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
