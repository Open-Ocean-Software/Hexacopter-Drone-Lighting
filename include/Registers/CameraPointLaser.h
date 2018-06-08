
#ifndef R_CAMERAPOINTLASER_H
#define R_CAMERAPOINTLASER_H

#define REGID_CAMPOINTLASER 0x06
#define REG_CAMPOINTLASER_DEFAULT 0x00
#define Reg_CamPointLaser_Get() (RegisterGet(REGID_CAMPOINTLASER))
#define Reg_CamPointLaser_GetValue() (RegisterGetValue(REGID_CAMPOINTLASER))
#define Reg_CamPointLaser_Set(v) (RegisterSet(REGID_CAMPOINTLASER, v))
#define Reg_CamPointLaser_SetValue(v) (RegisterSetValue(REGID_CAMPOINTLASER, v))
#define Reg_CamPointLaser_Reset() (RegisterSet(REGID_CAMPOINTLASER, REG_CAMPOINTLASER_DEFAULT))

#endif
