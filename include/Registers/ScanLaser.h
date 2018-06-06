
#ifndef SCANLASER_H
#define SCANLASER_H

#define REGID_SCANLASER 0x08
#define REG_SCANLASER_DEFAULT 0x00
#define Reg_ScanLaser_Get() (RegisterGet(REGID_SCANLASER))
#define Reg_ScanLaser_GetValue() (RegisterGetValue(REGID_SCANLASER))
#define Reg_ScanLaser_Set(v) (RegisterSet(REGID_SCANLASER, v))
#define Reg_ScanLaser_SetValue(v) (RegisterSetValue(REGID_SCANLASER, v))
#define Reg_ScanLaser_Reset() (RegisterSet(REGID_SCANLASER, REG_SCANLASER_DEFAULT))

#endif
