
#ifndef R_CAMERALEVELLASER_H
#define R_CAMERALEVELLASER_H

#define REGID_CAMLEVELLASER 0x07
#define REG_CAMLEVELLASER_DEFAULT 0x00
#define Reg_CamLevelLaser_Get() (RegisterGet(REGID_CAMLEVELLASER))
#define Reg_CamLevelLaser_GetValue() (RegisterGetValue(REGID_CAMLEVELLASER))
#define Reg_CamLevelLaser_Set(v) (RegisterSet(REGID_CAMLEVELLASER, v))
#define Reg_CamLevelLaser_SetValue(v) (RegisterSetValue(REGID_CAMLEVELLASER, v))
#define Reg_CamLevelLaser_Reset() (RegisterSet(REGID_CAMLEVELLASER, REG_CAMLEVELLASER_DEFAULT))

#endif
