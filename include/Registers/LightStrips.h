
#ifndef R_LIGHTSTRIPS_H
#define R_LIGHTSTRIPS_H

#define REGID_LIGHTSTRIPS 0x03
#define REG_LIGHTSTRIPS_DEFAULT 0x00
#define Reg_LightStrips_Get() (RegisterGet(REGID_LIGHTSTRIPS))
#define Reg_LightStrips_GetValue() (RegisterGetValue(REGID_LIGHTSTRIPS))
#define Reg_LightStrips_Set(v) (RegisterSet(REGID_LIGHTSTRIPS, v))
#define Reg_LightStrips_SetValue(v) (RegisterSetValue(REGID_LIGHTSTRIPS, v))
#define Reg_LightStrips_Reset() (RegisterSet(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_DEFAULT))


#define REG_LIGHTSTRIPS_FLAG_ERED 0x01
#define Reg_LightStrips_GetERed() (RegisterFlagGetValue(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_ERED) != 0x0)
#define Reg_LightStrips_SetERed(e) (RegisterFlagSet(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_ERED, (e != 0x0)))
#define Reg_LightStrips_Toggle_ERed() (RegisterFlagToggle(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_ERED))

#define REG_LIGHTSTRIPS_FLAG_EGREEN 0x01
#define Reg_LightStrips_GetEGreen() (RegisterFlagGetValue(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_EGREEN) != 0x0)
#define Reg_LightStrips_SetEGreen(e) (RegisterFlagSet(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_EGREEN, (e != 0x0)))
#define Reg_LightStrips_Toggle_EGreen() (RegisterFlagToggle(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_EGREEN))

#define REG_LIGHTSTRIPS_FLAG_EBLUE 0x01
#define Reg_LightStrips_GetEBlue() (RegisterFlagGetValue(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_EBLUE) != 0x0)
#define Reg_LightStrips_SetEBlue(e) (RegisterFlagSet(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_EBLUE, (e != 0x0)))
#define Reg_LightStrips_Toggle_EBlue() (RegisterFlagToggle(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_EBLUE))



#define REG_LIGHTSTRIPS_FLAG_BRED 0x01
#define Reg_LightStrips_GetBRed() (RegisterFlagGetValue(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BRED) != 0x0)
#define Reg_LightStrips_SetBRed(e) (RegisterFlagSet(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BRED, (e != 0x0)))
#define Reg_LightStrips_Toggle_BRed() (RegisterFlagToggle(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BRED))

#define REG_LIGHTSTRIPS_FLAG_BGREEN 0x01
#define Reg_LightStrips_GetBGreen() (RegisterFlagGetValue(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BGREEN) != 0x0)
#define Reg_LightStrips_SetBGreen(e) (RegisterFlagSet(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BGREEN, (e != 0x0)))
#define Reg_LightStrips_Toggle_BGreen() (RegisterFlagToggle(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BGREEN))

#define REG_LIGHTSTRIPS_FLAG_BBLUE 0x01
#define Reg_LightStrips_GetBBlue() (RegisterFlagGetValue(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BBLUE) != 0x0)
#define Reg_LightStrips_SetBBlue(e) (RegisterFlagSet(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BBLUE, (e != 0x0)))
#define Reg_LightStrips_Toggle_BBlue() (RegisterFlagToggle(REGID_LIGHTSTRIPS, REG_LIGHTSTRIPS_FLAG_BBLUE))

#endif
