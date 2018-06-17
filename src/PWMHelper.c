
#include "Component.h"
#include "Helpers/PWMHelper.h"
#include "Registers.h"

void PWMHandlerHelper (struct Component *comp, unsigned char t)
{
    unsigned char regval = FindRegister((*comp).RegisterAddress)->Value;
    if (t > regval && (*comp).SavedValue == 0x01) {
        *((*comp).Port) &= ~((*comp).Mask);
        (*comp).SavedValue = 0x00;
    } else if (t < regval && (*comp).SavedValue == 0x00) {
        *((*comp).Port) |= (*comp).Mask;
        (*comp).SavedValue = 0x01;
    }
}
