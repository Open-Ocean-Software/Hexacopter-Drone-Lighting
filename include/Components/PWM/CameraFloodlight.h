
#ifndef C_CAMERAFLOODLIGHT_H
#define C_CAMERAFLOODLIGHT_H

#define DDR_FLOODLIGHT_CAMERA
#define PORT_FLOODLIGHT_CAMERA
#define MASK_FLOODLIGHT_CAMERA
#define HANDLER_FLOODLIGHT_CAMERA &Handler_FloodlightCamera

void Handler_FloodlightCamera (struct PWMComponent comp, unsigned char t);

#endif
