
#ifndef PRESET_H
#define PRESET_H

#define REGID_PRESET 0x02
#define REG_PRESET_DEFAULT 0x00
#define Reg_Preset_Get() (RegisterGet(REGID_PRESET))
#define Reg_Preset_GetValue() (RegisterGetValue(REGID_PRESET))
#define Reg_Preset_Set(v) (RegisterSet(REGID_PRESET, v))
#define Reg_Preset_SetValue(v) (RegisterSetValue(REGID_PRESET, v))
#define Reg_Preset_Reset() (RegisterSet(REGID_PRESET, REG_PRESET_DEFAULT))

#endif
