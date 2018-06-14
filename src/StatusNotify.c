
#include "Components/PWM/StatusNotify.h"
#include "Helpers/PWMHelper.h"

void Handler_NotifyStatusR (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}

void Handler_NotifyStatusG (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}

void Handler_NotifyStatusB (struct PWMComponent *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
