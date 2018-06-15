
#include "Components/PWMComponent.h"

struct Component *InitializePWMComponent (struct Component comp, PWMHandler handler)
{
    struct PWMComponent *c = malloc(sizeof(struct PWMComponent));
    *c = { comp, handler };
    return (struct Component *)*c;
}
