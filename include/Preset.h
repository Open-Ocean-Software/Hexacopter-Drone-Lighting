
#ifndef PRESET_H
#define PRESET_H

typedef void (*PresetCallback) (double t);

struct Preset
{
    unsigned char Id;
    double StartTime;
    double MaxDuration;
    PresetCallback Callback;
};

/**
 * Creates a new preset with initialized values.
 * @param  id       The ID of the preset.
 * @param  duration The duration of activity (< 0 to persist)
 * @param  callback The routine callback on system cycles.
 * @return          The new preset.
 */
struct Preset InitializePreset (unsigned char id, double duration, PresetCallback callback);

#endif
