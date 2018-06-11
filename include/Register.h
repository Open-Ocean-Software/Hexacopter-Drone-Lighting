
#ifndef REGISTER_H
#define REGISTER_H

struct Register
{
    unsigned char Id;
    unsigned char Value;
    unsigned char DefaultValue;
};

struct Register InitializeRegister (unsigned char id, unsigned char defaultval);

unsigned char RegisterSetValue (unsigned char id, unsigned char value);
unsigned char RegisterGetValue (unsigned char id, unsigned char *value);
unsigned char RegisterGetValue (unsigned char id);

struct Register RegisterSet (unsigned char id, unsigned char value);
struct Register RegisterGet (unsigned char id);
struct Register RegisterReset (unsigned char id);

struct Register RegisterFlagToggle (unsigned char id, unsigned char mask);
struct Register RegisterFlagSet (unsigned char id, unsigned char mask, unsigned char value);
struct Register RegisterFlagGet (unsigned char id, unsigned char mask, unsigned char *value);
unsigned char RegisterFlagGetValue (unsigned char id, unsigned char mask);

#endif
