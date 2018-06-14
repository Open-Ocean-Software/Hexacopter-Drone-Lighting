
#ifndef C_SCANLASER_H
#define C_SCANLASER_H

#define DDR_LASER_SCAN
#define PORT_LASER_SCAN
#define MASK_LASER_SCAN
#define HANDLER_LASER_SCAN &Handler_LaserScan

void Handler_LaserScan (struct PWMComponent *comp, unsigned char t);

#endif
