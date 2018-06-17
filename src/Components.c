
#include "Components.h"

struct Component Components [COMPONENTLIST_COUNT] = { COMPONENTLIST };

void InitializeComponents (void)
{
    for (unsigned char i = 0; i < COMPONENTLIST_COUNT; i++) {
        if (Components[i].Operation == Input) {
            *(Components[i].DDRegister) &= ~Components[i].Mask;
            *(Components[i].Port) &= ~Components[i].Mask;
        } else if (Components[i].Operation == Output) {
            *(Components[i].DDRegister) |= Components[i].Mask;
            *(Components[i].Port) &= ~Components[i].Mask;
        }
    }
}
