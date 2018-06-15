
#include "Component.h"

struct Component InitializeIComponent (enum ComponentType type, struct Register *reg, volatile uint8_t *ddreg, volatile uint8_t *port, unsigned char mask)
{
    struct Component comp = { type, reg, ddreg, port, mask, 0x00 };
    *ddreg &= ~mask;
    *port &= ~mask;
    return comp;
}

struct Component InitializeOComponent (enum ComponentType type, struct Register *reg, volatile uint8_t *ddreg, volatile uint8_t *port, unsigned char mask)
{
    struct Component comp = { type, reg, ddreg, port, mask, 0x00 };
    *ddreg |= mask;
    *port &= ~mask;
    return comp;
}
