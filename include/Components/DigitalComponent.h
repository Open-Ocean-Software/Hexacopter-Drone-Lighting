
#ifndef DIGITALCOMPONENT_H
#define DIGITALCOMPONENT_H

#include "../Component.h"

typedef void (*DigitalHandler) (struct DigitalComponent *comp);

struct DigitalComponent
{
    struct Component base;
    DigitalHandler Handler;
};

/**
 * Creates a new digital component with the parameters initialized.
 * @param  comp    The base component
 * @param  handler The handler pointer triggered on system cycles
 * @return         The initialized digital component
 */
struct DigitalComponent InitializeDigitalComponent (struct Component comp, DigitalHandler handler);

#endif
