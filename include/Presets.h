
#ifndef PRESETS_H
#define PRESETS_H

#include "Preset.h"
#include "Registers.h"

/////////////////
// Add Presets //
/////////////////
#include "Presets/Alert.h"
#include "Presets/Bounce.h"
#include "Presets/Corrected.h"
#include "Presets/Danger.h"
#include "Presets/Flash.h"
#include "Presets/Off.h"
#include "Presets/On.h"
#include "Presets/Spin.h"
#include "Presets/Warning.h"

//////////////////////
// Register Presets //
//////////////////////
#define PRESET_LIST     InitializePreset(PRESET_OFF, PRESET_OFF_DURATION, PRESET_OFF_HANDLER), \
                        InitializePreset(PRESET_ON, PRESET_ON_DURATION, PRESET_ON_HANDLER), \
                        InitializePreset(PRESET_SPIN, PRESET_SPIN_DURATION, PRESET_SPIN_HANDLER), \
                        InitializePreset(PRESET_BOUNCE, PRESET_BOUNCE_DURATION, PRESET_BOUNCE_HANDLER), \
                        InitializePreset(PRESET_FLASH, PRESET_FLASH_DURATION, PRESET_FLASH_HANDLER), \
                        InitializePreset(PRESET_CORRECTED, PRESET_CORRECTED_DURATION, PRESET_CORRECTED_HANDLER), \
                        InitializePreset(PRESET_ALERT, PRESET_ALERT_DURATION, PRESET_ALERT_HANDLER), \
                        InitializePreset(PRESET_WARNING, PRESET_WARNING_DURATION, PRESET_WARNING_HANDLER), \
                        InitializePreset(PRESET_DANGER, PRESET_DANGER_DURATION, PRESET_DANGER_HANDLER)

#define PRESET_LIST_COUNT 9



extern struct Preset Presets [];

struct Preset FindPreset (unsigned char id);

#endif
