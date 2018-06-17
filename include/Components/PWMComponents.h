
#ifndef PWMCOMPONENTS_H
#define PWMCOMPONENTS_H

#include "../Registers.h"

#include <avr/io.h>

////////////////////////
// Add PWM Components //
////////////////////////
#include "PWM/CameraFloodlight.h"
#include "PWM/CameraLevelLaser.h"
#include "PWM/CameraPointLaser.h"
#include "PWM/LandingFloodlight.h"
#include "PWM/ScanLaser.h"
#include "PWM/StatusNotify.h"

/////////////////////////////
// Register PWM Components //
/////////////////////////////
#define COMPONENTLIST_PWM   InitializeOComponent(PWM, REGID_CAMLIGHT, DDR_FLOODLIGHT_CAMERA, PORT_FLOODLIGHT_CAMERA, MASK_FLOODLIGHT_CAMERA, HANDLER_FLOODLIGHT_CAMERA), \
                            InitializeOComponent(PWM, REGID_CAMLEVELLASER, DDR_LASER_CAMERALEVEL, PORT_LASER_CAMERALEVEL, MASK_LASER_CAMERALEVEL, HANDLER_LASER_CAMERALEVEL), \
                            InitializeOComponent(PWM, REGID_CAMPOINTLASER, DDR_LASER_CAMERAPOINT, PORT_LASER_CAMERAPOINT, MASK_LASER_CAMERAPOINT, HANDLER_LASER_CAMERAPOINT), \
                            InitializeOComponent(PWM, REGID_LANDLIGHT, DDR_FLOODLIGHT_LANDING, PORT_FLOODLIGHT_LANDING, MASK_FLOODLIGHT_LANDING, HANDLER_FLOODLIGHT_LANDING), \
                            InitializeOComponent(PWM, REGID_SCANLASER, DDR_LASER_SCAN, PORT_LASER_SCAN, MASK_LASER_SCAN, HANDLER_LASER_SCAN), \
                            InitializeOComponent(PWM, REGID_STATNOTIFYR, DDR_NOTIFY_STATUSR, PORT_NOTIFY_STATUSR, MASK_NOTIFY_STATUSR, HANDLER_NOTIFY_STATUSR), \
                            InitializeOComponent(PWM, REGID_STATNOTIFYG, DDR_NOTIFY_STATUSG, PORT_NOTIFY_STATUSG, MASK_NOTIFY_STATUSG, HANDLER_NOTIFY_STATUSG), \
                            InitializeOComponent(PWM, REGID_STATNOTIFYB, DDR_NOTIFY_STATUSB, PORT_NOTIFY_STATUSB, MASK_NOTIFY_STATUSB, HANDLER_NOTIFY_STATUSB)

#define COMPONENTLIST_PWM_COUNT 8

#endif
