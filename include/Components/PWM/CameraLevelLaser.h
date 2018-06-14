
#ifndef C_CAMERALEVELLASER_H
#define C_CAMERALEVELLASER_H

#define DDR_LASER_CAMERALEVEL
#define PORT_LASER_CAMERALEVEL
#define MASK_LASER_CAMERALEVEL
#define HANDLER_LASER_CAMERALEVEL &Handler_LaserCameraLevel

void Handler_LaserCameraLevel (struct PWMComponent *comp, unsigned char t);

#endif
