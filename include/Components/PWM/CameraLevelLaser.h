
#ifndef C_CAMERALEVELLASER_H
#define C_CAMERALEVELLASER_H

#define DDR_LASER_CAMERALEVEL DDRC
#define PORT_LASER_CAMERALEVEL PORTC
#define MASK_LASER_CAMERALEVEL (1 << PC3)
#define HANDLER_LASER_CAMERALEVEL &Handler_LaserCameraLevel

void Handler_LaserCameraLevel (struct Component *comp, unsigned char t);

#endif
