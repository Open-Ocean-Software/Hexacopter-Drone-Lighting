
#ifndef DIGITALCOMPONENT_H
#define DIGITALCOMPONENT_H

#include "../Component.h"

typedef void (*DigitalHandler) (struct DigitalComponent comp);

struct DigitalComponent
{
    struct Component base;
    DigitalHandler Handler;
};

struct InitializeDigitalComponent (struct Component comp, DigitalHandler handler);

#endif
