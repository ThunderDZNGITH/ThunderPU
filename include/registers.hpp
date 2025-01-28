#ifndef REGISTERS_H
#define REGISTERS_H

#include "utils.h"
#include <array>


enum class regIndex : byte{
    R0 = 0x0,
    R1 = 0x1,
    R2 = 0x2,
    R3 = 0x3,
    R4 = 0x4,
    R5 = 0x5,
    R6 = 0x6,
    R7 = 0x7,
    SP = 0x8,
    BP = 0x9,
    IP = 0xA,
    FLAGS = 0xB,
    A0 = 0xC,
    A1 = 0xD,
    I0 = 0xE,
    I1 = 0xF 
};


void writeToRegister(Registers reg, word value) {
    reg = value;
} 

#endif  //  REGISTERS_H