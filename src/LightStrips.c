
#include "Components.h"
#include "Config.h"

void setShiftRegister (unsigned char *Port, unsigned char mask, unsigned char val)
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

void Handler_LightStrip_Select (struct Component *comp)
{
    struct Component *c = (struct Component *)comp;
    unsigned char regval = *c->*Register->Value;
    if (*c->SavedValue != regval) {
        setShiftRegister(*c->Port, *c->Mask, regval);
    }
    *c->SavedValue = regval;
}

void Handler_LightStrip_Data (struct Component *comp) { }
