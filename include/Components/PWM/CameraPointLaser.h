
#ifndef C_CAMERAPOINTLASER_H
#define C_CAMERAPOINTLASER_H

#define DDR_LASER_CAMERAPOINT
#define PORT_LASER_CAMERAPOINT
#define MASK_LASER_CAMERAPOINT
#define HANDLER_LASER_CAMERAPOINT &Handler_LaserCameraPoint

void Handler_LaserCameraPoint (struct PWMComponent comp, unsigned char t);

#endif
