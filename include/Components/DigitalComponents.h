
#ifndef DIGITALCOMPONENTS_H
#define DIGITALCOMPONENTS_H

#import "DigitalComponent.h"
#import "../Registers.h"

////////////////////////////
// Add Digital Components //
////////////////////////////
#import "Digital/LightStrips.h"

/////////////////////////////////
// Register Digital Components //
/////////////////////////////////
#define COMPONENTLIST_DIGITAL   InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS), &DDR_LIGHTSTRIP_DATA, &PORT_LIGHTSTRIP_DATA, MASK_LIGHTSTRIP_DATA), HANDLER_LIGHTSTRIP_DATA)

#define COMPONENTLIST_DIGITAL_COUNT 1

#endif
