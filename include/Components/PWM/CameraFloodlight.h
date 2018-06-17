
#ifndef C_CAMERAFLOODLIGHT_H
#define C_CAMERAFLOODLIGHT_H

#define DDR_FLOODLIGHT_CAMERA DDRB
#define PORT_FLOODLIGHT_CAMERA PORTB
#define MASK_FLOODLIGHT_CAMERA (1 << PB0)
#define HANDLER_FLOODLIGHT_CAMERA Handler_FloodlightCamera

void Handler_FloodlightCamera (struct Component *comp, unsigned char t);

#endif
