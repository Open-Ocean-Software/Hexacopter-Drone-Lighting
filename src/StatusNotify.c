
#include "Components.h"
#include "Helpers/PWMHelper.h"

void Handler_NotifyStatus (struct Component *comp, unsigned char t)
{
    if (Reg_Control_GetEnabledNotify()) {
        PWMHandlerHelper(comp, t);
    }
}
