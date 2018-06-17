
#ifndef R_CONTROL_H
#define R_CONTROL_H

#define REGID_CONTROL 0x01
#define REG_CONTROL_DEFAULT 0x0F
#define Reg_Control_Get() (RegisterGet(REGID_CONTROL))
#define Reg_Control_GetValue() (RegisterGetValue(REGID_CONTROL))
#define Reg_Control_Set(v) (RegisterSet(REGID_CONTROL, v))
#define Reg_Control_SetValue(v) (RegisterSetValue(REGID_CONTROL, v))
#define Reg_Control_Reset() (RegisterSet(REGID_CONTROL, REG_CONTROL_DEFAULT))


#define REG_CONTROL_FLAG_ENABLE 0x01
#define Reg_Control_GetEnabled() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_ENABLE) != 0x0)
#define Reg_Control_SetEnabled(e) (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_ENABLE, (e != 0x0)))
#define Reg_Control_Toggle_Enabled() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_ENABLE))

#define REG_CONTROL_FLAG_ENABLESTRIPS 0x02
#define Reg_Control_GetEnabledStrips() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_ENABLESTRIPS) != 0x0)
#define Reg_Control_SetEnabledStrips() (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_ENABLESTRIPS, (e != 0x0)))
#define Reg_Control_Toggle_EnabledStrips() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_ENABLESTRIPS))

#define REG_CONTROL_FLAG_ENABLEUTILITIES 0x04
#define Reg_Control_GetEnabledUtilities() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_ENABLEUTILITIES) != 0x0)
#define Reg_Control_SetEnabledUtilities(e) (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_ENABLEUTILITIES, (e != 0x0)))
#define Reg_Control_Toggle_EnabledUtilities() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_ENABLEUTILITIES))

#define REG_CONTROL_FLAG_ENABLENOTIFY 0x08
#define Reg_Control_GetEnabledNotify() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_ENABLENOTIFY) != 0x0)
#define Reg_Control_SetEnabledNotify(e) (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_ENABLENOTIFY, (e != 0x0)))
#define Reg_Control_Toggle_EnabledNotify() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_ENABLENOTIFY))

#define REG_CONTROL_FLAG_RESET 0x10
#define Reg_Control_GetReset() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_RESET) != 0x0)
#define Reg_Control_SetReset(e) (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_RESET, (e != 0x0)))
#define Reg_Control_Toggle_Reset() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_RESET))

#define REG_CONTROL_FLAG_ENLPM 0x20
#define Reg_Control_GetEnLPM() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_ENLPM) != 0x0)
#define Reg_Control_SetEnLPM(e) (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_ENLPM, (e != 0x0)))
#define Reg_Control_Toggle_EnLPM() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_ENLPM))

#define REG_CONTROL_FLAG_ALLOFF 0x40
#define Reg_Control_GetAllOff() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_ALLOFF) != 0x0)
#define Reg_Control_SetAllOff(e) (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_ALLOFF, (e != 0x0)))
#define Reg_Control_Toggle_AllOff() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_ALLOFF))

#define REG_CONTROL_FLAG_ALLON 0x80
#define Reg_Control_GetAllOn() (RegisterFlagGetValue(REGID_CONTROL, REG_CONTROL_FLAG_ALLON) != 0x0)
#define Reg_Control_SetAllOn(e) (RegisterFlagSet(REGID_CONTROL, REG_CONTROL_FLAG_ALLON, (e != 0x0)))
#define Reg_Control_Toggle_AllOn() (RegisterFlagToggle(REGID_CONTROL, REG_CONTROL_FLAG_ALLON))

#endif
