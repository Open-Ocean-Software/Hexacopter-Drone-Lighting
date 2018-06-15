
#ifndef PWMCOMPONENT_H
#define PWMCOMPONENT_H

#include "../Component.h"

typedef void (*PWMHandler) (struct Component *comp, unsigned char t);

struct PWMComponent
{
    struct Component base;
    PWMHandler Handler;
};

/**
 * Creates a new PWM component with the parameters initialized.
 * @param  comp    The base component
 * @param  handler The handler pointer to be called on system cycles
 * @return         The initialized PWM component
 */
struct PWMComponent *InitializePWMComponent (struct Component comp, PWMHandler handler);

#endif
