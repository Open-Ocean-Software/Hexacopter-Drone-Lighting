
#ifndef COMPONENT_H
#define COMPONENT_H

#include "Register.h"

enum ComponentType
{
    Digital,
    PWM
};

struct Component
{
    enum ComponentType Type;
    struct Register *Register;
    volatile unsigned char *DDRegister;
    volatile unsigned char *Port;
    unsigned char Mask;
};

struct Component InitializeIComponent (enum ComponentType type, struct Register *reg, unsigned char *ddreg, unsigned char *port, unsigned char mask);
struct Component InitializeOComponent (enum ComponentType type, struct Register *reg, unsigned char *ddreg, unsigned char *port, unsigned char mask);

struct Component *SetComponent (struct Component *comp, unsigned char mask);
struct Component *ToggleComponent (struct Component *comp, unsigned char mask);

#endif
