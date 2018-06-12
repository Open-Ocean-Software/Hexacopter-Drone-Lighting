
#include "Communications.h"
#include "Registers.h"
#include "Config.h"

#include <stdio.h>
#include <avr/io.h>

int spiSendByte (char data, FILE *stream)
{
    SPDR = data;
    while (!(SPSR & (1 << SPIF)));
    return 0;
}

int spiReceiveByte (FILE *stream)
{
    while (!(SPSR & (1 << SPIF)));
    return SPDR;
}

FILE SPI_OStream = FDEV_SETUP_STREAM(spiSendByte, NULL, _FDEV_SETUP_WRITE);
FILE SPI_IStream = FDEV_SETUP_STREAM(NULL, spiReceiveByte, _FDEV_SETUP_READ);

void spiInitialize (void)
{
    // Set MISO output, all others input.
    DDR_SPI = (1 << DD_MISO);
    // Enable SPI
    SPCR = (1 << SPE);

    stdout = &SPI_OStream;
    stdin = &SPI_IStream;
}

unsigned char ReadCommunications (void)
{
    char buffer [CONFIG_COMMUNICATIONS_MESSAGELENGTH];
    gets(buffer);

    unsigned char addr = (buffer[0] & CONFIG_COMMUNICATIONS_ADDRESSMASK);
    unsigned char util = buffer[1];

    if (!RegisterExists(addr)) {
        return 0x00;
    }

    if ((buffer[0] & CONFIG_COMMUNICATIONS_MODEMASK) == CONFIG_COMMUNICATIONS_READMODE) {
        unsigned char val;
        if (RegisterGetValue(addr, &val)) {
            unsigned char msg [CONFIG_COMMUNICATIONS_MESSAGELENGTH];
            msg[0] = addr;
            msg[1] = (val & util);
            return (WriteCommunications(msg) != 0x00);
        } else {
            return 0x00;
        }
    } else if ((buffer[0] & CONFIG_COMMUNICATIONS_MODEMASK) == CONFIG_COMMUNICATIONS_WRITEMODE) {
        return (RegisterSetValue(addr, util) != 0x00);
    } else {
        return 0x00;
    }
}

unsigned char WriteCommunications (unsigned char *val)
{
    char buffer [CONFIG_COMMUNICATIONS_MESSAGELENGTH];
    memcpy(buffer, val, CONFIG_COMMUNICATIONS_MESSAGELENGTH);
    puts(buffer);
    return 0x01;
}
