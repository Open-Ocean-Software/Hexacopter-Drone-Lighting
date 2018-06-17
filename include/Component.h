
#ifndef COMPONENT_H
#define COMPONENT_H

#include "Registers.h"

#include <stdint.h>

enum ComponentType
{
    Digital,
    PWM
};
enum Operations
{
    Input,
    Output
};

struct Component
{
    enum Operations Operation;
    enum ComponentType Type;
    unsigned char RegisterAddress;
    volatile uint8_t *DDRegister;
    volatile uint8_t *Port;
    unsigned char Mask;
    unsigned char SavedValue;
    void (*Handler)(struct Component *comp, unsigned char t);
};

/**
 * Initializes an input component with set properties.
 * @param  type     The type of component.
 * @param  reg      The data register's pointer.
 * @param  ddreg    The data-direction register's pointer.
 * @param  port     The register's port pointer.
 * @param  mask     The mask of pins to be initialized.
 * @param handler   The function called on system cycles.
 * @return          The initialized component.
 */
#define InitializeIComponent(type, regaddr, ddreg, port, mask, handler) { .Operation = Input, .Type = type, .RegisterAddress = regaddr, .DDRegister = &ddreg, .Port = &port, .Mask = mask, .SavedValue = 0x00, .Handler = &handler }

/**
 * Initializes an output component with set properties.
 * @param  type     The type of component.
 * @param  reg      The data register's pointer.
 * @param  ddreg    The data-direction register's pointer.
 * @param  port     The register's port pointer.
 * @param  mask     The mask of pins to be initialized.
 * @param handler   The function called on system cycles.
 * @return          The initialized component.
 */
#define InitializeOComponent(type, regaddr, ddreg, port, mask, handler) { .Operation = Output, .Type = type, .RegisterAddress = regaddr, .DDRegister = &ddreg, .Port = &port, .Mask = mask, .SavedValue = 0x00, .Handler = &handler }

#endif
