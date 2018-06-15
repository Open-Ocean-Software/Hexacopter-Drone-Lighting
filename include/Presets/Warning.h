
#ifndef P_WARNING_H
#define P_WARNING_H

#define PRESET_WARNING 0x08
#define PRESET_WARNING_DURATION 2.0
#define PRESET_WARNING_HANDLER &Preset_Warning_Handler

void Preset_Warning_Handler (double t);

#endif
