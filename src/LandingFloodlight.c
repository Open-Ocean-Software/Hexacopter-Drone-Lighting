
#include "Components.h"
#include "Helpers/PWMHelper.h"

void Handler_FloodlightLanding (struct Component *comp, unsigned char t)
{
    if (Reg_Control_GetEnabledUtilities()) {
        PWMHandlerHelper(comp, t);
    }
}
