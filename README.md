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

## Configuration
This module contains a configuration header file ("/include/Config.h") that keeps
all configurable macros in one place for easy editing.  It contains settings
such as byte masks and timeout durations along with hardware properties such
as the CPU frequency.

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
Lighting Manager.  It is interfaced via the SPI protocol from the master.  A
register consists of a unique ID, a default value, and usually helper macros.
For more details, please consult the "Adding Registers" section.

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

### Emphasis Light Strips Red (03H)
The register that controls the emphasis light strips' red color.
Code in "Registers/LightStrips.h"
- 0-7: Activity Code (r/w)
  - Each bit flag controls the red component of the corresponding LED.

### Emphasis Light Strips Green (04H)
The register that controls the emphasis light strips' green color.
Code in "Registers/LightStrips.h"
- 0-7: Activity Code (r/w)
  - Each bit flag controls the green component of the corresponding LED.

### Emphasis Light Strips Blue (05H)
The register that controls the emphasis light strips' blue color.
Code in "Registers/LightStrips.h"
- 0-7: Activity Code (r/w)
  - Each bit flag controls the blue component of the corresponding LED.

### Background Light Strips Red (06H)
The register that controls the background light strips' red color.
Code in "Registers/LightStrips.h"
- 0-7: Activity Code (r/w)
  - Each bit flag controls the red component of the corresponding LED.

### Background Light Strips Green (07H)
The register that controls the background light strips' green color.
Code in "Registers/LightStrips.h"
- 0-7: Activity Code (r/w)
  - Each bit flag controls the green component of the corresponding LED.

### Background Light Strips Blue (08H)
The register that controls the background light strips' blue color.
Code in "Registers/LightStrips.h"
- 0-7: Activity Code (r/w)
  - Each bit flag controls the blue component of the corresponding LED.

### Camera Floodlight (09H)
The register that controls the alpha for the camera floodlight.
Code in "Registers/CameraFloodlight.h"
- 0-7: Alpha (r/w)
  - The brightness of the camera floodlight.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Landing Gear Floodlight (0AH)
The register that controls the alpha for the landing gear floodlight.
Code in "Registers/LandingFloodlight.h"
- 0-7: Alpha (r/w)
  - The brightness of the landing gear floodlight.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Camera Point Laser (0BH)
The register that controls the alpha for the camera point laser.
Code in "Registers/CameraPointLaser.h"
- 0-7: Alpha (r/w)
  - The brightness of the camera point laser.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Camera Level Laser (0CH)
The register that controls the alpha for the camera level laser.
Code in "Registers/CameraLevelLaser.h"
- 0-7: Alpha (r/w)
  - The brightness of the camera level laser.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Scan Laser (0DH)
The register that controls the alpha for the scan laser.
Code in "Registers/ScanLaser.h"
- 0-7: Alpha (r/w)
  - The brightness of the scan laser.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Status Notify R (0EH)
The register that controls the alpha for the status notify LED's red component.
Code in "Registers/StatusNotify.h"
- 0-7: Alpha (r/w)
  - The brightness of the status notify LED's red component.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Status Notify G (0FH)
The register that controls the alpha for the status notify LED's green component.
Code in "Registers/StatusNotify.h"
  - 0-7: Alpha (r/w)
  - The brightness of the status notify LED's green component.
  - Brightness is determined by `(VALUE / 255) * 100%`

### Status Notify B (10H)
The register that controls the alpha for the status notify LED's blue component.
Code in "Registers/StatusNotify.h"
  - 0-7: Alpha (r/w)
  - The brightness of the status notify LED's blue component.
  - Brightness is determined by `(VALUE / 255) * 100%`

## Adding Registers
It may be necessary to add registers to this module.  To do this follow the
instructions below (it may also help to consult other register code):

1. Create a header file for the register in "/include/Registers"
   - Define a unique register ID.  This is how you will address your register
     in communications.
     - Example:
     ```c
     #define REGID_MYREGISTER 0x55
     ```
   - Define a default register value.  This is default value given to your
     register if it has not yet been initialized.
     - Example:
     ```c
     #define REG_MYREGISTER_DEFAULT 0x86
     ```
   - Create helper macros (optional).  These functions may help read from
     or write to registers in your implementation.
2. Add and register the register in "/include/Registers.h"
   - Add an include for your register's header.  This gives you access to the
     macros you defined earlier.
     - Example:
     ```c
     #include "Registers/MyRegister.h"
     ```
   - Initialize the register in the `REGISTERLIST` macro with the macros you
     defined in your register's header file.  This maintains a list of all
     currently active registers.
     - Example:
     ```c
     #define REGISTERLIST   BLAH..., \
                            BLAH..., \
                            InitializeRegister(REGID_MYREGISTER, REG_MYREGISTER_DEFAULT), \
                            BLAH..., \
                            BLAH...
     ```
   - Add 1 to the `REGISTERLIST_COUNT` macro.  This macro keeps track of how
     many registers there are.
3. You may now address your register in communications and in your
   implementation using the helper macros you defined in your header or through
   the built-in functions defined in "/include/Register.h" and
   "/include/Registers.h".

## Presets
Presets are a built-in way to control the entire functionality of the module
without the need to have continuous communication with the module.  The presets
are a set of hard-coded operations that control the behavior of each individual
component.  A register has three attributes: ID, duration, and handling.  The
ID is a unique value that corresponds last 7 bits of the `PRESET` register.  The
duration is the amount of time it takes for the current preset to expire.
Lastly, the handling
is a reference to a C function that controls the behavior of the module during
the time in which the preset is active.

_Note_: presets override other commands.

### Persisting Presets
To make the preset persist, set the persist mask of the `PRESET` register to
true.  By default this is the first bit of the register (80H).  To change this
mask, please consult the "Configuration" section.

### Vanilla Presets
- **Off** (ID: 01H; Duration: auto-persist): All off.
- **On** (ID: 02H; Duration: auto-persist): All on (brightest setting).
- **Emit** (ID: 03H; Duration: 2.0s): Strips emit a line of individual colors.
- **Bounce** (ID: 04H; Duration: 1.0s): Strips flash in an outward direction in
  blue.
- **Flash** (ID: 05H; Duration: 1.0s): Strips flash 3 times in blue.
- **Corrected** (ID: 06H; Duration: 1.0s): Strips progressively fill with blue then
  turn green.
- **Alert** (ID: 07H; Duration: 1.0s): Strips do 3 quick yellow flashes.
- **Warning** (ID: 08H; Duration: 2.0s): Strips fill and empty 3 times with red and
  yellow alternating.
- **Danger** (ID: 09H; Duration: auto-persist): Strips filled with red alternating
  and flashing.

## Adding Presets
It is always a good idea to customize the presets to fit your needs.  You may
also add them similarly to how you add registers.  To add custom presets, follow
the instructions below (it may help to consult other preset code):

1. Create a header file in "/include/Presets"
   - Define a unique ID for the preset.  This is how you will reference your
     preset in the `PRESET` register.
     - Example:
     ```c
     #define PRESET_MYPRESET 0x55
     ```
   - Define the register's duration in seconds.  To make the the preset
     auto-persist, make this value less than zero.
     - Example (normal):
     ```c
     #define PRESET_MYPRESET_DURATION 2.5
     ```
     - Example (auto-persist):
     ```c
     #define PRESET_MYPRESET_DURATION -1.0
     ```
   - Define the register's handler macro.  This is called periodically based on
     the value of `CONFIG_PRESETS_CALLBACKPERIOD` in the configuration.  The
     handler macro defines the address of the callback function which takes a
     total elapsed time as its only argument and returns void.
     - Example:
     ```c
     #define PRESET_MYPRESET_HANDLER &Preset_MyPreset_Handler
     void Preset_MyPreset_Handler (double t);
     ```
2. Add and register the preset in "/include/Presets.h"
   - Add an include for your preset's header.  This is to import your macros.
     ```c
     #include "Presets/MyPreset.h"
     ```
   - Register your preset in `PRESET_LIST` macro with the macros you defined
     earlier.  This keeps a list of all currently active presets.
     - Example:
     ```c
     #define PRESET_LIST    BLAH..., \
                            BLAH..., \
                            InitializePreset(PRESET_MYPRESET, PRESET_MYPRESET_DURATION, PRESET_MYPRESET_HANDLER), \
                            BLAH..., \
                            BLAH...
    ```
   - Add 1 to the `PRESET_LIST_COUNT` macro.  This keeps track of the amount of
     total presets.
3. Add implementation for the handler function in a C source file in "/src".  
   This will control the behavior of your preset based on the total elapsed
   time.  The function should influence only registers.
4. You may now address your new preset via the `PRESET` register by setting the
   register's address and persist mask.

## Components
The components registry is a modular approach to controlling the on-board
components of the module.  They relay information from the registers to the
physical pins that control individual components.  The registers of the
registered components are checked on every system cycle, and the corresponding
action is taken.  There are two types of components used to categorize
components: digital and PWM.  Every component is assigned one of these
categories.

### Vanilla Components
#### Digital
- Light Strips
  - Emphasis
    - Red (Shift Register Set)
    - Green (Shift Register Set)
    - Blue (Shift Register Set)
  - Background
    - Red (Shift Register Set)
    - Green (Shift Register Set)
    - Blue (Shift Register Set)
#### PWM (Pulse Width Modulated)
- Camera Floodlight (SMD LED)
- Landing Floodlight (SMD LED)
- Camera Level Laser (Line Laser)
- Camera Point Laser (Point Laser)
- Scan Laser (Line Laser)
- Status Notify
  - Red (RGB LED Red)
  - Green (RGB LED Green)
  - Blue (RGB LED Blue)

## Adding Components
If you decide to add components, follow the instructions below (it may also help
to consult other component code):

1. Create a header file in "/include/Components/Digital" for digital components
   and "/include/Components/PWM" for PWM components
   - Define a Data Direction Register (DDR) macro.  This is the hardware
     register utilized by the component.
     - Example:
     ```c
     #define DDR_MYCOMPONENT DDRx
     ```
   - Define a Port macro.  This is the hardware port utilized by the component.
     - Example:
     ```c
     #define PORT_MYCOMPONENT PORTx
     ```
   - Define a mask macro.  When the associated register masked with this macro
     is true, it is turned on and vice versa.
     - Example:
     ```c
     #define MASK_MYCOMPONENT 0x01
     ```
   - Define a handler address macro.  This is the address of the function called
     on every system cycle to execute the necessary actions.  It takes the
     active component as an argument and returns void for digital components,
     and it takes the active component and elapsed duty in milliseconds as the
     arguments and returns void for PWM components.
     - Example (digital):
     ```c
     #define HANDLER_MYCOMPONENT &Handler_MyComponent
     void Handler_MyComponent (struct DigitalComponent comp);
     ```
     - Example (PWM):
     ```c
     #define HANDLER_MYCOMPONENT &Handler_MyComponent
     void Handler_MyComponent (struct PWMComponent comp, unsigned char t);
     ```
2. Add and register your component in "/include/Components/DigitalComponents.h"
   for digital components or "/include/Components/PWMComponents.h" for PWM
   components.
   - Add an include for your header file.  This lets you reference the macros
     you previously defined.
     - Example (digital):
     ```c
     #include "Digital/MyComponent.h"
     ```
     - Example (PWM):
     ```c
     #include "PWM/MyComponent.h"
     ```
   - Initialize your component in the `COMPONENTLIST_DIGITAL` macro for digital
     components or the `COMPONENTLIST_PWM` macro for PWM components.  This
     tracks all currently active components.
     - Example (digital):
     ```c
     #define COMPONENTLIST_DIGITAL  BLAH..., \
                                    BLAH..., \
                                    InitializeDigitalComponent(InitializeOComponent(Digital, *FindRegister(REGID_MYCOMPONENT), &DDR_MYCOMPONENT, &PORT_MYCOMPONENT, MASK_MYCOMPONENT), HANDLER_MYCOMPONENT), \
                                    BLAH..., \
                                    BLAH...
     ```
     - Example (PWM):
     ```c
     #define COMPONENTLIST_PWM   BLAH..., \
                                 BLAH..., \
                                 InitializePWMComponent(InitializeOComponent(PWM, *FindRegister(REGID_MYCOMPONENT), &DDR_MYCOMPONENT, &PORT_MYCOMPONENT, MASK_MYCOMPONENT), HANDLER_MYCOMPONENT), \
                                 BLAH..., \
                                 BLAH...
     ```
   - Add 1 to the `COMPONENTLIST_DIGITAL_COUNT` macro for digital components or
     `COMPONENTLIST_PWM_COUNT` macro for PWM components.  This keeps track of
     the number of components.
3. Implement the handler function.
   - Implement the `Handler_MyComponent` function you defined in the header file.
   - The function is executed on every system cycle.
   - It is usually helpful to store the register's current value in
     `Component.SavedValue` for reference in the next cycle.
   - For PWM components, a duty cycle helper is available for reference in
     "include/Helpers/PWMHelper.h"
     - The `PWMHandlerHelper` function can be executed in a PWM component's
       handler function.  Directly pass the arguments down to `PWMHandlerHelper`
       in your handler function to execute the default duty cycle algorithm.
4. The component should now automatically handle changes in the register with
     the handler you defined.
