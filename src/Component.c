
#include "Component.h"

struct Component InitializeIComponent (enum ComponentType type, struct Register *reg, unsigned char *ddreg, unsigned char *port, unsigned char mask)
{
    struct Component comp = { type, *reg, *ddreg, *port, mask };
    *ddreg &= ~mask;
    *port &= ~mask;
    return comp;
}

struct Component InitializeOComponent (enum ComponentType type, struct Register *reg, unsigned char *ddreg, unsigned char *port, unsigned char mask)
{
    struct Component comp = { type, *reg, *ddreg, *port, mask };
    *ddreg |= mask;
    *port &= ~mask;
    return comp;
}
