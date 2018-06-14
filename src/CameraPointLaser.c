
#include "Components/PWM/CameraPointLaser.h"
#include "Helpers/PWMHelper.h"

void Handler_LaserCameraPoint (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
