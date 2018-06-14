
#ifndef PWMHELPER_H
#define PWMHELPER_H

#include "../Components/PWMComponent.h"

/**
 * Helps process duty cycles of PWM components.
 * @param comp The PWM Component to process.
 * @param t    The current time progress through the duty cycle.
 */
void PWMHandlerHelper (struct PWMComponent *comp, unsigned char t);

#endif
