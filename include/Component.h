
#ifndef COMPONENT_H
#define COMPONENT_H

#include "Register.h"

#include <stdint.h>

enum ComponentType
{
    Digital,
    PWM
};

struct Component
{
    enum ComponentType Type;
    struct Register *Register;
    volatile uint8_t *DDRegister;
    volatile uint8_t *Port;
    unsigned char Mask;
    unsigned char SavedValue;
};

/**
 * Initializes an input component with set properties.
 * @param  type  The type of component.
 * @param  reg   The data register's pointer.
 * @param  ddreg The data-direction register's pointer.
 * @param  port  The register's port pointer.
 * @param  mask  The mask of pins to be initialized.
 * @return       The initialized component.
 */
struct Component InitializeIComponent (enum ComponentType type, struct Register *reg, volatile uint8_t *ddreg, volatile uint8_t *port, unsigned char mask);

/**
 * Initializes an output component with set properties.
 * @param  type  The type of component.
 * @param  reg   The data register's pointer.
 * @param  ddreg The data-direction register's pointer.
 * @param  port  The register's port pointer.
 * @param  mask  The mask of pins to be initialized.
 * @return       The initialized component.
 */
struct Component InitializeOComponent (enum ComponentType type, struct Register *reg, volatile uint8_t *ddreg, volatile uint8_t *port, unsigned char mask);

#endif
