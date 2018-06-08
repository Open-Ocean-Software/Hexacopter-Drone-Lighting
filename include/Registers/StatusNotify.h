
#ifndef R_STATUSNOTIFY_H
#define R_STATUSNOTIFY_H

#define REGID_STATNOTIFYR 0x09
#define REG_STATNOTIFYR_DEFAULT 0x00
#define Reg_StatNotifyR_Get() (RegisterGet(REGID_STATNOTIFYR))
#define Reg_StatNotifyR_GetValue() (RegisterGetValue(REGID_STATNOTIFYR))
#define Reg_StatNotifyR_Set(v) (RegisterSet(REGID_STATNOTIFYR, v))
#define Reg_StatNotifyR_SetValue(v) (RegisterSetValue(REGID_STATNOTIFYR, v))
#define Reg_StatNotifyR_Reset() (RegisterSet(REGID_STATNOTIFYR, REG_STATNOTIFYR_DEFAULT))



#define REGID_STATNOTIFYG 0x0A
#define REG_STATNOTIFYG_DEFAULT 0x00
#define Reg_StatNotifyG_Get() (RegisterGet(REGID_STATNOTIFYG))
#define Reg_StatNotifyG_GetValue() (RegisterGetValue(REGID_STATNOTIFYG))
#define Reg_StatNotifyG_Set(v) (RegisterSet(REGID_STATNOTIFYG, v))
#define Reg_StatNotifyG_SetValue(v) (RegisterSetValue(REGID_STATNOTIFYG, v))
#define Reg_StatNotifyG_Reset() (RegisterSet(REGID_STATNOTIFYG, REG_STATNOTIFYG_DEFAULT))



#define REGID_STATNOTIFYB 0x0B
#define REG_STATNOTIFYB_DEFAULT 0x00
#define Reg_StatNotifyB_Get() (RegisterGet(REGID_STATNOTIFYB))
#define Reg_StatNotifyB_GetValue() (RegisterGetValue(REGID_STATNOTIFYB))
#define Reg_StatNotifyB_Set(v) (RegisterSet(REGID_STATNOTIFYB, v))
#define Reg_StatNotifyB_SetValue(v) (RegisterSetValue(REGID_STATNOTIFYB, v))
#define Reg_StatNotifyB_Reset() (RegisterSet(REGID_STATNOTIFYB, REG_STATNOTIFYB_DEFAULT))

#endif
