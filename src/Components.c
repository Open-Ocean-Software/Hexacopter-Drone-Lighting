
#include "Components.h"

struct Component *Components [COMPONENTLIST_COUNT];

void InitializeComponents (void)
{
    Components = (struct Component *){ COMPONENTLIST };
}
