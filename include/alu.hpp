#ifndef ALU_H
#include "registers.hpp"

class ALU {

    public:

    ALU();

    void Operation_ADD(Registers::regIndex a, Registers::regIndex b);
    void Operation_SUB(Registers::regIndex a, Registers::regIndex b);
    void Operation_OR(Registers::regIndex a, Registers::regIndex b);
    void Operation_XOR(Registers::regIndex a, Registers::regIndex b);
    void Operation_INC(Registers::regIndex a);
    void Operation_DEC(Registers::regIndex a);
    void Operation_SHL(Registers::regIndex a);
    void Operation_SHR(Registers::regIndex a);

    void Operation_NOT(Registers::regIndex a);
    void Operation_MUL(Registers::regIndex a, Registers::regIndex b);
    void Operation_DIV(Registers::regIndex a, Registers::regIndex b);
    void Operation_MOD(Registers::regIndex a, Registers::regIndex b);
    void Operation_ROR(Registers::regIndex a);
    void Operation_ROL(Registers::regIndex a);

};

#define ALU_H
#endif  //  ALU_H

