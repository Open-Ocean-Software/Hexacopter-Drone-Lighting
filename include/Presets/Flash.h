
#ifndef P_FLASH_H
#define P_FLASH_H

#define PRESET_FLASH 0x05
#define PRESET_FLASH_DURATION 1.0
#define PRESET_FLASH_HANDLER &Preset_Flash_Handler

void Preset_Flash_Handler (double t);

#endif
