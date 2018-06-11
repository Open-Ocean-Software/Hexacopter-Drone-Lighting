
#ifndef DIGITALCOMPONENTS_H
#define DIGITALCOMPONENTS_H

#include "DigitalComponent.h"
#include "../Registers.h"

////////////////////////////
// Add Digital Components //
////////////////////////////
#include "Digital/LightStrips.h"

/////////////////////////////////
// Register Digital Components //
/////////////////////////////////
#define COMPONENTLIST_DIGITAL   InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS), &DDR_LIGHTSTRIP_DATA, &PORT_LIGHTSTRIP_DATA, MASK_LIGHTSTRIP_DATA), HANDLER_LIGHTSTRIP_DATA)

#define COMPONENTLIST_DIGITAL_COUNT 1

#endif
