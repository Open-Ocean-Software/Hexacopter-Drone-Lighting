
#ifndef P_EMIT_H
#define P_EMIT_H

#define PRESET_EMIT 0x03
#define PRESET_EMIT_DURATION 2.0
#define PRESET_EMIT_HANDLER &Preset_Emit_Handler

void Preset_Emit_Handler (double t);

#endif
