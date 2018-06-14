
#include "Components/DigitalComponent.h"

struct InitializeDigitalComponent (struct Component comp, DigitalHandler handler)
{
    struct DigitalComponent c = { comp, handler };
    return c;
}
