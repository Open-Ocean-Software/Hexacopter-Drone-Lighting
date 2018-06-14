
#include "Components/PWM/ScanLaser.h"
#include "Helpers/PWMHelper.h"

void Handler_LaserScan (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
