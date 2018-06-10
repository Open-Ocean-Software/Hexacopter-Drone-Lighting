
#ifndef P_FLASH_H
#define P_FLASH_H

#define PRESET_FLASH 0x05
#define PRESET_FLASH_DURATION 1.0
#define PRESET_FLASH_HANDLER &Preset_Bounce_Handler

void Preset_Bounce_Handler (double t);

#endif
