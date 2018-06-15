
#include "Components.h"
#include "Helpers/PWMHelper.h"

void Handler_NotifyStatusR (struct Component *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}

void Handler_NotifyStatusG (struct Component *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}

void Handler_NotifyStatusB (struct Component *comp, unsigned char t)
{
    PWMHandlerHelper(comp, t);
}
