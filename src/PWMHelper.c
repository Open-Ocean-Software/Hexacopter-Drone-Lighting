
#include "Helpers/PWMHelper.h"

void PWMHandlerHelper (struct PWMComponent *comp, unsigned char t)
{
    struct Component *c = (struct Component *)comp;
    unsigned char regval = *c->*Register->Value;
    if (t > regval && *c->SavedValue == 0x01) {
        *c->*Port &= ~(*c->Mask);
        *c->SavedValue = 0x00;
    } else if (t < regval && *c->SavedValue == 0x00) {
        *c->*Port |= *c->Mask;
        *c->SavedValue = 0x01;
    }
}
