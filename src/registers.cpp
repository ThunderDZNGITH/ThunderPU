#include "registers.hpp"

Registers::Registers() {} 

word Registers::reg_R0 = 0;
word Registers::reg_R1 = 0;
word Registers::reg_R2 = 0;
word Registers::reg_R3 = 0;
word Registers::reg_R4 = 0;
word Registers::reg_R5 = 0;
word Registers::reg_R6 = 0;
word Registers::reg_R7 = 0;
word Registers::reg_SP = 0;
word Registers::reg_BP = 0;
word Registers::reg_IP = 0;
word Registers::reg_FLAGS = 0;
word Registers::reg_A0 = 0;
word Registers::reg_A1 = 0;
word Registers::reg_I0 = 0;
word Registers::reg_I1 = 0;

void Registers::writeToRegister(regIndex reg, word value){
    switch(reg){
        case regIndex::R0:
            reg_R0 = value;
            break;
        case regIndex::R1:
            reg_R1 = value;
            break;
        case regIndex::R2:
            reg_R2 = value;
            break;
        case regIndex::R3:
            reg_R3 = value;
            break;
        case regIndex::R4:
            reg_R4 = value;
            break;
        case regIndex::R5:
            reg_R5 = value;
            break;
        case regIndex::R6:
            reg_R6 = value;
            break;
        case regIndex::R7:
            reg_R7 = value;
            break;
        case regIndex::SP:
            reg_SP = value;
            break;
        case regIndex::BP:
            reg_BP = value;
            break;
        case regIndex::IP:
            reg_IP = value;
            break;
        case regIndex::FLAGS:
            reg_FLAGS = value;
            break;
        case regIndex::A0:
            reg_A0 = value;
            break;
        case regIndex::A1:
            reg_A1 = value;
            break;
        case regIndex::I0:
            reg_I0 = value;
            break;
        case regIndex::I1:
            reg_I1 = value;
            break;
        default:
            break;
    } 
} 
word Registers::readFromRegister(regIndex reg){
    switch(reg){
        case regIndex::R0:
            return reg_R0;
            break;
        case regIndex::R1:
            return reg_R1;
            break;
        case regIndex::R2:
            return reg_R2;
            break;
        case regIndex::R3:
            return reg_R3;
            break;
        case regIndex::R4:
            return reg_R4;
            break;
        case regIndex::R5:
            return reg_R5;
            break;
        case regIndex::R6:
            return reg_R6;
            break;
        case regIndex::R7:
            return reg_R7;
            break;
        case regIndex::SP:
            return reg_SP;
            break;
        case regIndex::BP:
            return reg_BP;
            break;
        case regIndex::IP:
            return reg_IP;
            break;
        case regIndex::FLAGS:
            return reg_FLAGS;
            break;
        case regIndex::A0:
            return reg_A0;
            break;
        case regIndex::A1:
            return reg_A1;
            break;
        case regIndex::I0:
            return reg_I0;
            break;
        case regIndex::I1:
            return reg_I1;
            break;
        default:
            return 0;
    } 
} 