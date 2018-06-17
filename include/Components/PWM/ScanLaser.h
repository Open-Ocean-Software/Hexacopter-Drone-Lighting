
#ifndef C_SCANLASER_H
#define C_SCANLASER_H

#define DDR_LASER_SCAN DDRC
#define PORT_LASER_SCAN PORTC
#define MASK_LASER_SCAN PC5
#define HANDLER_LASER_SCAN Handler_LaserScan

void Handler_LaserScan (struct Component *comp, unsigned char t);

#endif
