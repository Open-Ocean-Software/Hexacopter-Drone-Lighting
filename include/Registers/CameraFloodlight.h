
#ifndef CAMERAFLOODLIGHT_H
#define CAMERAFLOODLIGHT_H

#define REGID_CAMLIGHT 0x04
#define REG_CAMLIGHT_DEFAULT 0x00
#define Reg_CamLight_Get() (RegisterGet(REGID_CAMLIGHT))
#define Reg_CamLight_GetValue() (RegisterGetValue(REGID_CAMLIGHT))
#define Reg_CamLight_Set(v) (RegisterSet(REGID_CAMLIGHT, v))
#define Reg_CamLight_SetValue(v) (RegisterSetValue(REGID_CAMLIGHT, v))
#define Reg_CamLight_Reset() (RegisterSet(REGID_CAMLIGHT, REG_CAMLIGHT_DEFAULT))

#endif
