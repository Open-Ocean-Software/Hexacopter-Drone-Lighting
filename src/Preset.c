
#include "Preset.h"

struct Preset InitializePreset (unsigned char id, double duration, PresetCallback callback)
{
    struct Preset preset = { id, 0.0, duration, callback };
    return preset;
}
