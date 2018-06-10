
#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H

unsigned char ReadCommunications (void);
unsigned char ReadCommunications (struct Register *reg);
unsigned char WriteCommunications (unsigned char *val);
unsigned char WriteCommunications (unsigned char *val, struct Register *reg);

#endif
