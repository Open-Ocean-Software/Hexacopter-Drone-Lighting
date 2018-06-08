
#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

#define READMODE 0x0
#define WRITEMODE 0x80

unsigned char ReadCommunications (void);
unsigned char ReadCommunications (struct Register *reg);
unsigned char WriteCommunications (unsigned char *val);
unsigned char WriteCommunications (unsigned char *val, struct Register *reg);

#endif
