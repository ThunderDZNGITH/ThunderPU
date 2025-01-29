#include "alu.hpp"

ALU::ALU(){} 

void ALU::Operation_ADD(Registers::regIndex a, Registers::regIndex b){
    Registers::writeToRegister(a, (Registers::readFromRegister(a) + Registers::readFromRegister(b)));
} 

void ALU::Operation_SUB(Registers::regIndex a, Registers::regIndex b){
        Registers::writeToRegister(a, (Registers::readFromRegister(a) - Registers::readFromRegister(b)));
} 
void ALU::Operation_OR(Registers::regIndex a, Registers::regIndex b){
        Registers::writeToRegister(a, (Registers::readFromRegister(a) | Registers::readFromRegister(b)));
} 
void ALU::Operation_XOR(Registers::regIndex a, Registers::regIndex b){
        Registers::writeToRegister(a, (Registers::readFromRegister(a) ^ Registers::readFromRegister(b)));
} 
void ALU::Operation_INC(Registers::regIndex a){
        Registers::writeToRegister(a, (Registers::readFromRegister(a) + 1));
} 
void ALU::Operation_DEC(Registers::regIndex a, Registers::regIndex b);
void ALU::Operation_SHL(Registers::regIndex a, Registers::regIndex b);
void ALU::Operation_SHR(Registers::regIndex a, Registers::regIndex b);

void ALU::Operation_NOT(Registers::regIndex a, Registers::regIndex b);
void ALU::Operation_MUL(Registers::regIndex a, Registers::regIndex b);
void ALU::Operation_DIV(Registers::regIndex a, Registers::regIndex b);
void ALU::Operation_MOD(Registers::regIndex a, Registers::regIndex b);
void ALU::Operation_ROR(Registers::regIndex a, Registers::regIndex b);
void ALU::Operation_ROL(Registers::regIndex a, Registers::regIndex b);
