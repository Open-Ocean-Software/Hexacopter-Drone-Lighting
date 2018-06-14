
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
#define COMPONENTLIST_DIGITAL   InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS_ERED), &DDR_LIGHTSTRIP_EMPHASISR, &PORT_LIGHTSTRIP_EMPHASISR, MASK_LIGHTSTRIP_EMPHASISR), HANDLER_LIGHTSTRIP_EMPHASISR), \
                                InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS_EGREEN), &DDR_LIGHTSTRIP_EMPHASISG, &PORT_LIGHTSTRIP_EMPHASISG, MASK_LIGHTSTRIP_EMPHASISG), HANDLER_LIGHTSTRIP_EMPHASISG), \
                                InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS_EBLUE), &DDR_LIGHTSTRIP_EMPHASISB, &PORT_LIGHTSTRIP_EMPHASISB, MASK_LIGHTSTRIP_EMPHASISB), HANDLER_LIGHTSTRIP_EMPHASISB), \
                                InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS_BRED), &DDR_LIGHTSTRIP_BACKGROUNDR, &PORT_LIGHTSTRIP_BACKGROUNDR, MASK_LIGHTSTRIP_BACKGROUNDR), HANDLER_LIGHTSTRIP_BACKGROUNDR), \
                                InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS_BGREEN), &DDR_LIGHTSTRIP_BACKGROUNDG, &PORT_LIGHTSTRIP_BACKGROUNDG, MASK_LIGHTSTRIP_BACKGROUNDG), HANDLER_LIGHTSTRIP_BACKGROUNDG), \
                                InitializeDigitalComponent(InitializeOComponent(Digital, FindRegister(REGID_LIGHTSTRIPS_BBLUE), &DDR_LIGHTSTRIP_BACKGROUNDB, &PORT_LIGHTSTRIP_BACKGROUNDB, MASK_LIGHTSTRIP_BACKGROUNDB), HANDLER_LIGHTSTRIP_BACKGROUNDB), \
                                InitializeDigitalComponent(InitializeOComponent(Digital, NULL, &DDR_LIGHTSTRIP_DATA, &PORT_LIGHTSTRIP_DATA, MASK_LIGHTSTRIP_DATA), HANDLER_LIGHTSTRIP_DATA)

#define COMPONENTLIST_DIGITAL_COUNT 7

#endif
