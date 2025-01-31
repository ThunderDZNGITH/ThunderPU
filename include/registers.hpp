#ifndef REGISTERS_H
#define REGISTERS_H

#include "utils.hpp"

class Registers {

public:
Registers();

enum regIndex : byte{
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

static void writeToRegister(regIndex reg, word value);
static word readFromRegister(regIndex reg);

static word reg_R0;
static word reg_R1;
static word reg_R2;
static word reg_R3;
static word reg_R4;
static word reg_R5;
static word reg_R6;
static word reg_R7;
static word reg_SP;
static word reg_BP;
static word reg_IP;
static word reg_FLAGS;
static word reg_A0;
static word reg_A1;
static word reg_I0;
static word reg_I1;
};

#endif  //  REGISTERS_H