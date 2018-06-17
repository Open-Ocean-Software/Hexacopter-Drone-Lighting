
#ifndef C_CAMERAPOINTLASER_H
#define C_CAMERAPOINTLASER_H

#define DDR_LASER_CAMERAPOINT DDRC
#define PORT_LASER_CAMERAPOINT PORTC
#define MASK_LASER_CAMERAPOINT (1 << PC4)
#define HANDLER_LASER_CAMERAPOINT Handler_LaserCameraPoint

void Handler_LaserCameraPoint (struct Component *comp, unsigned char t);

#endif
