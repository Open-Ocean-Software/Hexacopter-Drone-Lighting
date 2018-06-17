
#ifndef STORAGE_H
#define STORAGE_H

unsigned char LoadRegisterValue (unsigned char id);
unsigned char TryLoadRegisterValue (unsigned char id, unsigned char *value);

unsigned char SaveRegisterValue (unsigned char id, unsigned char value);

unsigned char LoadRegisters (struct Register *reg, unsigned char count);
unsigned char SaveRegisters (struct Register *reg, unsigned char count);
unsigned char ResetRegisters (struct Register *reg, unsigned char count);

#endif
