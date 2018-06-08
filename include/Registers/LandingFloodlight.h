
#ifndef R_LANDINGFLOODLIGHT_H
#define R_LANDINGFLOODLIGHT_H

#define REGID_LANDLIGHT 0x05
#define REG_LANDLIGHT_DEFAULT 0x00
#define Reg_LandLight_Get() (RegisterGet(REGID_LANDLIGHT))
#define Reg_LandLight_GetValue() (RegisterGetValue(REGID_LANDLIGHT))
#define Reg_LandLight_Set(v) (RegisterSet(REGID_LANDLIGHT, v))
#define Reg_LandLight_SetValue(v) (RegisterSetValue(REGID_LANDLIGHT, v))
#define Reg_LandLight_Reset() (RegisterSet(REGID_LANDLIGHT, REG_LANDLIGHT_DEFAULT))

#endif
