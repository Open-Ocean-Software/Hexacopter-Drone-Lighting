
#include "Components/PWMComponent.h"

struct PWMComponent InitializePWMComponent (struct Component comp, PWMHandler handler)
{
    struct PWMComponent c = { comp, handler };
    return c;
}
