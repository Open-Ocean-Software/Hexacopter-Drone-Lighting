
#ifndef PWMCOMPONENT_H
#define PWMCOMPONENT_H

#include "../Component.h"

typedef void (*PWMHandler) (struct PWMComponent *comp, unsigned char t);

struct PWMComponent
{
    struct Component base;
    PWMHandler Handler;
};

struct PWMComponent InitializePWMComponent (struct Component comp, PWMHandler handler);

#endif
