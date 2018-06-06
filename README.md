# Hexacopter-Drone-Lighting

## Overview
The Light Manager controls all of the major light systems of the drone.  The
module is controlled as an SPI slave device via a system of registers.  Each
register controls a different functionality in the light system, and all
registers are saved between power cycles in the EEPROM.  It can also be
controlled with a preset code that defines specific, time-based activity.

## The Module
This module comes with most of the drone's lights: light strips, floodlights,
lasers, and a status notify light.  The light strips are a series of RGB LEDs
controlled in unison via a shift registers.  Since these shift registers are
binary, they can only be set to display primary and secondary colors.  The
floodlights and lasers are both SMD LEDs and are controlled via PWM.  The
brightness is controlled in the registers.  The status notify light is an
RGB LED that is also controlled via PWM so it has the capability to display
all colors.

This module also comes with an EEPROM on-board.  This is utilized to store the
values of the registers between power cycles.

## Communication and Control
The Light Manager is controlled with a series of registers that control every
variable aspect of the module.  These registers are 1 byte long and are usually
either a collection of bit flags or byte long values.  Each bit is specified
as read, write, and/or execute depending on its functionality.

### Reading and Writing to Registers
Communication with the register system requires first an address byte and then
a value byte.  The address byte's MSB is a read/write bit (read: 0, write: 1),
and the other 7 bits are the address of the register.  The value byte contains
the value of the byte to be written or the mask of the byte to be read.

#### Examples
To write 0x0F (0001111) to register 01H (00000001), send:
```
10001111 00001111
```
The first bit of the address is set to write mode followed by the address of the
register.  The value to be written is then sent as the value byte.

To read the first second nibble of register 0AH (0001010), send:
```
00001010 11110000
```
The first bit of the address is set to read mode followed by the address of the
register.  The mask of the value to be returned is then sent as the second byte.

## Registers
The array of registers are the interface used to communicate and control the
Lighting Manager.  It is interfaced via the SPI protocol from the master.
Below is a list of registers, and details about their parameters.  For more
information about communication.  Please see the "Communication" section.

### Control (01H)
The control register of the module.
Code in "Registers/Control.h"
- 0: Enabled (r/w)
  - Enables or disables the module.
  - Does not allow communication or action until the module is enabled again.
- 1: Strips Enabled (r/w)
  - Enables or disables the light strips.
  - Controls the registers in charge of controlling the LED light strips.
- 2: Utilities Enabled (r/w)
  - Enables or disables the utility lights.
  - Controls the registers in charge of controlling the utility lights.
- 3: Notify Enabled (r/w)
  - Enables or disables the notify lights.
  - Controls the registers in charge of controlling the notify lights.
- 4: Reset (x/r/w)
  - Resets all registers to their default value.
  - Sets all registers to the default value specified in the macros.
  - Affects data stored in SRAM and EEPROM.
  - Bit automatically resets when complete.
- 5: Enable Low Power Mode (r/w)
  - Enables or disables low power mode.
  - Limits the module to low power consumption activities when enabled.
- 6: All Off (x/r/w)
  - Turns off all lights.
  - Overrides "All On".
- 7: All On (x/r/w)
  - Turns on all lights.
  - Is overridden by "All Off".

### Preset (02H)
The register that selects the light preset.
Code in "Registers/Preset.h"
- 0-7: Code (r/w)
  - The preset selection code.
  - Selects the current light preset based upon the selection code.

### Light Strips (03H)
The register that controls the light strip colors.
Code in "Registers/LightStrips.h"
- 0: Emphasis Red (r/w)
  - The red value of the emphasis light strips.
- 1: Emphasis Green (r/w)
  - The green value of the emphasis light strips.
- 2: Emphasis Blue (r/w)
  - The blue value of the emphasis light strips.
- 3: Background Red (r/w)
  - The red value of the background light strips.
- 4: Background Green (r/w)
  - The green value of the background light strips.
- 5: Background Blue (r/w)
  - The blue value of the background light strips.
- 6-7: Reserved (r)

### Camera Floodlight (04H)
The register that controls the alpha for the camera floodlight.
Code in "Registers/CameraFloodlight.h"
- 0-7: Alpha (r/w)
  - The brightness of the camera floodlight.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Landing Gear Floodlight (05H)
The register that controls the alpha for the landing gear floodlight.
Code in "Registers/LandingFloodlight.h"
- 0-7: Alpha (r/w)
  - The brightness of the landing gear floodlight.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Camera Point Laser (06H)
The register that controls the alpha for the camera point laser.
Code in "Registers/CameraPointLaser.h"
- 0-7: Alpha (r/w)
  - The brightness of the camera point laser.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Camera Level Laser (07H)
The register that controls the alpha for the camera level laser.
Code in "Registers/CameraLevelLaser.h"
- 0-7: Alpha (r/w)
  - The brightness of the camera level laser.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Scan Laser (08H)
The register that controls the alpha for the scan laser.
Code in "Registers/ScanLaser.h"
- 0-7: Alpha (r/w)
  - The brightness of the scan laser.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Status Notify R (09H)
The register that controls the alpha for the status notify LED's red component.
Code in "Registers/StatusNotify.h"
- 0-7: Alpha (r/w)
  - The brightness of the status notify LED's red component.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Status Notify G (0AH)
The register that controls the alpha for the status notify LED's green component.
Code in "Registers/StatusNotify.h"
  - 0-7: Alpha (r/w)
  - The brightness of the status notify LED's green component.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Status Notify B (0BH)
The register that controls the alpha for the status notify LED's blue component.
Code in "Registers/StatusNotify.h"
  - 0-7: Alpha (r/w)
  - The brightness of the status notify LED's blue component.
  - Brightness is determined by `(VALUE / 255) * 100%`
