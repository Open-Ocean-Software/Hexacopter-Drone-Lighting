
#ifndef C_LANDINGFLOODLIGHT_H
#define C_LANDINGFLOODLIGHT_H

#define DDR_FLOODLIGHT_LANDING
#define PORT_FLOODLIGHT_LANDING
#define MASK_FLOODLIGHT_LANDING
#define HANDLER_FLOODLIGHT_LANDING &Handler_FloodlightLanding

void Handler_FloodlightLanding (struct PWMComponent comp, unsigned char t);

#endif
