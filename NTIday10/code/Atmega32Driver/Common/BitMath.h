/**
 * @file BitMath.h
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-08-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#ifndef _COMMON_BITMATH_H
#define _COMMON_BITMATH_H

#include <stdint.h>

#define SetBit(Reg,BitNo)       ((Reg)|=(uint8_t)(1U<<(BitNo)))
#define ClearBit(Reg,BitNo)     ((Reg)&=(uint8_t)~(uint8_t)(1U<<(BitNo)))
#define ToggleBit(Reg,BitNo)    ((Reg)^=(uint8_t)(1U<<(BitNo)))
#define ReadBit(Reg,BitNo)      (((Reg)>>(BitNo))&0x01U)

#endif /**/
