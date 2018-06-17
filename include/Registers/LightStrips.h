
#ifndef R_LIGHTSTRIPS_H
#define R_LIGHTSTRIPS_H

#define REGID_LIGHTSTRIPS_ERED 0x03
#define REG_LIGHTSTRIPS_ERED_DEFAULT 0x00
#define Reg_LightStripsERed_Get() (RegisterGet(REGID_LIGHTSTRIPS_ERED))
#define Reg_LightStripsERed_GetValue() (RegisterGetValue(REGID_LIGHTSTRIPS_ERED))
#define Reg_LightStripsERed_Set(v) (RegisterSet(REGID_LIGHTSTRIPS_ERED, v))
#define Reg_LightStripsERed_SetValue(v) (RegisterSetValue(REGID_LIGHTSTRIPS_ERED, v))
#define Reg_LightStripsERed_Reset() (RegisterSet(REGID_LIGHTSTRIPS_ERED, REG_LIGHTSTRIPS_ERED_DEFAULT))

#define REGID_LIGHTSTRIPS_EGREEN 0x04
#define REG_LIGHTSTRIPS_EGREEN_DEFAULT 0x00
#define Reg_LightStripsEGreen_Get() (RegisterGet(REGID_LIGHTSTRIPS_EGREEN))
#define Reg_LightStripsEGreen_GetValue() (RegisterGetValue(REGID_LIGHTSTRIPS_EGREEN))
#define Reg_LightStripsEGreen_Set(v) (RegisterSet(REGID_LIGHTSTRIPS_EGREEN, v))
#define Reg_LightStripsEGreen_SetValue(v) (RegisterSetValue(REGID_LIGHTSTRIPS_EGREEN, v))
#define Reg_LightStripsEGreen_Reset() (RegisterSet(REGID_LIGHTSTRIPS_EGREEN, REG_LIGHTSTRIPS_EGREEN_DEFAULT))

#define REGID_LIGHTSTRIPS_EBLUE 0x05
#define REG_LIGHTSTRIPS_EBLUE_DEFAULT 0x00
#define Reg_LightStripsEBlue_Get() (RegisterGet(REGID_LIGHTSTRIPS_EBLUE))
#define Reg_LightStripsEBlue_GetValue() (RegisterGetValue(REGID_LIGHTSTRIPS_EBLUE))
#define Reg_LightStripsEBlue_Set(v) (RegisterSet(REGID_LIGHTSTRIPS_EBLUE, v))
#define Reg_LightStripsEBlue_SetValue(v) (RegisterSetValue(REGID_LIGHTSTRIPS_EBLUE, v))
#define Reg_LightStripsEBlue_Reset() (RegisterSet(REGID_LIGHTSTRIPS_EBLUE, REG_LIGHTSTRIPS_EBLUE_DEFAULT))



#define REGID_LIGHTSTRIPS_BRED 0x06
#define REG_LIGHTSTRIPS_BRED_DEFAULT 0x00
#define Reg_LightStripsBRed_Get() (RegisterGet(REGID_LIGHTSTRIPS_BRED))
#define Reg_LightStripsBRed_GetValue() (RegisterGetValue(REGID_LIGHTSTRIPS_BRED))
#define Reg_LightStripsBRed_Set(v) (RegisterSet(REGID_LIGHTSTRIPS_BRED, v))
#define Reg_LightStripsBRed_SetValue(v) (RegisterSetValue(REGID_LIGHTSTRIPS_BRED, v))
#define Reg_LightStripsBRed_Reset() (RegisterSet(REGID_LIGHTSTRIPS_BRED, REG_LIGHTSTRIPS_BRED_DEFAULT))

#define REGID_LIGHTSTRIPS_BGREEN 0x07
#define REG_LIGHTSTRIPS_BGREEN_DEFAULT 0x00
#define Reg_LightStripsBGreen_Get() (RegisterGet(REGID_LIGHTSTRIPS_BGREEN))
#define Reg_LightStripsBGreen_GetValue() (RegisterGetValue(REGID_LIGHTSTRIPS_BGREEN))
#define Reg_LightStripsBGreen_Set(v) (RegisterSet(REGID_LIGHTSTRIPS_BGREEN, v))
#define Reg_LightStripsBGreen_SetValue(v) (RegisterSetValue(REGID_LIGHTSTRIPS_BGREEN, v))
#define Reg_LightStripsBGreen_Reset() (RegisterSet(REGID_LIGHTSTRIPS_BGREEN, REG_LIGHTSTRIPS_BGREEN_DEFAULT))

#define REGID_LIGHTSTRIPS_BBLUE 0x08
#define REG_LIGHTSTRIPS_BBLUE_DEFAULT 0x00
#define Reg_LightStripsBBlue_Get() (RegisterGet(REGID_LIGHTSTRIPS_BBLUE))
#define Reg_LightStripsBBlue_GetValue() (RegisterGetValue(REGID_LIGHTSTRIPS_BBLUE))
#define Reg_LightStripsBBlue_Set(v) (RegisterSet(REGID_LIGHTSTRIPS_BBLUE, v))
#define Reg_LightStripsBBlue_SetValue(v) (RegisterSetValue(REGID_LIGHTSTRIPS_BBLUE, v))
#define Reg_LightStripsBBlue_Reset() (RegisterSet(REGID_LIGHTSTRIPS_BBLUE, REG_LIGHTSTRIPS_BBLUE_DEFAULT))

#endif
