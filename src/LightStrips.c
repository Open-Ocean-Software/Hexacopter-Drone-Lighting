
#include "Components.h"
#include "Config.h"
#include "Registers.h"
#include "Controller.h"

#include <util/delay.h>
#include <stdint.h>

void setShiftRegister (volatile uint8_t *Port, unsigned char mask, unsigned char val)
{
    for (unsigned char i = 0; i < sizeof(unsigned char); i++) {
        if (val & (1 << i)) {
            PORT_LIGHTSTRIP_DATA |= MASK_LIGHTSTRIP_DATA;
        } else {
            PORT_LIGHTSTRIP_DATA &= ~MASK_LIGHTSTRIP_DATA;
        }
        *Port |= mask;
        _delay_ms(CONFIG_COMPONENTS_SHIFTREGSETPERIOD);
        *Port &= ~mask;
        _delay_ms(CONFIG_COMPONENTS_SHIFTREGSETPERIOD);
    }
}

void Handler_LightStrip_Select (struct Component *comp, unsigned char t)
{
    unsigned char regval = FindRegister((*comp).RegisterAddress)->Value;
    if ((*comp).SavedValue != regval) {
        setShiftRegister((*comp).Port, (*comp).Mask, regval);
    }
    (*comp).SavedValue = regval;
}

void Handler_LightStrip_Data (struct Component *comp, unsigned char t) { }
