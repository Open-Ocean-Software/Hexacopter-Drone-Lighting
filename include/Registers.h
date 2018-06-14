
#ifndef REGISTERS_H
#define REGISTERS_H

#include "Register.h"

///////////////////
// Add Registers //
///////////////////
#include "Registers/Control.h"
#include "Registers/Preset.h"
#include "Registers/LightStrips.h"
#include "Registers/CameraFloodlight.h"
#include "Registers/LandingFloodlight.h"
#include "Registers/CameraPointLaser.h"
#include "Registers/CameraLevelLaser.h"
#include "Registers/ScanLaser.h"
#include "Registers/StatusNotify.h"

////////////////////////
// Register Registers //
////////////////////////
#define REGISTERLIST    InitializeRegister(REGID_CONTROL, REG_CONTROL_DEFAULT), \
                        InitializeRegister(REGID_PRESET, REG_PRESET_DEFAULT), \
                        InitializeRegister(REGID_LIGHTSTRIPS_ERED, REG_LIGHTSTRIPS_ERED_DEFAULT), \
                        InitializeRegister(REGID_LIGHTSTRIPS_EGREEN, REG_LIGHTSTRIPS_EGREEN_DEFAULT), \
                        InitializeRegister(REGID_LIGHTSTRIPS_EBLUE, REG_LIGHTSTRIPS_EBLUE_DEFAULT), \
                        InitializeRegister(REGID_LIGHTSTRIPS_BRED, REG_LIGHTSTRIPS_BRED_DEFAULT), \
                        InitializeRegister(REGID_LIGHTSTRIPS_BGREEN, REG_LIGHTSTRIPS_BGREEN_DEFAULT), \
                        InitializeRegister(REGID_LIGHTSTRIPS_BBLUE, REG_LIGHTSTRIPS_BBLUE_DEFAULT), \
                        InitializeRegister(REGID_CAMLIGHT, REG_CAMLIGHT_DEFAULT), \
                        InitializeRegister(REGID_LANDLIGHT, REG_LANDLIGHT_DEFAULT), \
                        InitializeRegister(REGID_CAMPOINTLASER, REG_CAMPOINTLASER_DEFAULT), \
                        InitializeRegister(REGID_CAMLEVELLASER, REG_CAMLEVELLASER_DEFAULT), \
                        InitializeRegister(REGID_SCANLASER, REG_SCANLASER_DEFAULT), \
                        InitializeRegister(REGID_STATNOTIFYR, REG_STATNOTIFYR_DEFAULT), \
                        InitializeRegister(REGID_STATNOTIFYG, REG_STATNOTIFYG_DEFAULT), \
                        InitializeRegister(REGID_STATNOTIFYB, REG_STATNOTIFYB_DEFAULT)

#define REGISTERLIST_COUNT 16



extern struct Register Registers [];

/**
 * Gets the first register with the ID.
 * @param  id The ID to match.
 * @return    A pointer to the register.
 */
struct Register *FindRegister (unsigned char id);

/**
 * Checks if the register exists.
 * @param  id The ID to match.
 * @return    A success value.
 */
unsigned char RegisterExists (unsigned char id);

#endif
