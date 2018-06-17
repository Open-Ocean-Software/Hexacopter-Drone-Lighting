
#ifndef PWMHELPER_H
#define PWMHELPER_H

/**
 * Helps process duty cycles of PWM components.
 * @param comp The PWM Component to process.
 * @param t    The current time progress through the duty cycle.
 */
void PWMHandlerHelper (struct Component *comp, unsigned char t);

#endif
