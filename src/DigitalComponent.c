
#include "Components/DigitalComponent.h"

struct Component *InitializeDigitalComponent (struct Component comp, DigitalHandler handler)
{
    struct DigitalComponent *c = malloc(sizeof(struct DigitalComponent));
    *c = { comp, handler };
    return (struct Component *)*c;
}
