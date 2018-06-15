
#ifndef C_LANDINGFLOODLIGHT_H
#define C_LANDINGFLOODLIGHT_H

#define DDR_FLOODLIGHT_LANDING DDRB
#define PORT_FLOODLIGHT_LANDING PORTB
#define MASK_FLOODLIGHT_LANDING PB1
#define HANDLER_FLOODLIGHT_LANDING &Handler_FloodlightLanding

void Handler_FloodlightLanding (struct Component *comp, unsigned char t);

#endif
