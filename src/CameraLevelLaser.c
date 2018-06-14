
#include "Components/PWM/CameraLevelLaser.h"
#include "Helpers/PWMHelper.h"

void Handler_LaserCameraLevel (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
