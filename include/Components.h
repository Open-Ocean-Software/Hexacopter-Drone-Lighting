
#ifndef COMPONENTS_H
#define COMPONENTS_H

#include "Component.h"

#include <avr/io.h>


////////////////////
// Add Components //
////////////////////
#include "Components/DigitalComponents.h"
#include "Components/PWMComponents.h"

/////////////////////////
// Register Components //
/////////////////////////
#define COMPONENTLIST   COMPONENTS_DIGITAL, \
                        COMPONENTS_PWM

#define COMPONENTLIST_COUNT COMPONENTLIST_DIGITAL_COUNT + COMPONENTLIST_PWM_COUNT



extern struct Component Components [];

#endif
