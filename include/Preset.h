
#ifndef PRESET_H
#define PRESET_H

typedef void (*PresetCallback) (double t);

struct Preset
{
    unsigned char Id;
    double ElapsedDuration;
    double MaxDuration;
    PresetCallback Callback;
};

struct Preset InitializePreset (unsigned char id, double duration, PresetCallback callback);

#endif
