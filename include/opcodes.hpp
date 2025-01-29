#ifndef OPCODES_H
#define OPCODES_H

#include "utils.hpp" 

enum class opCodes : byte {
    // 00xx xxxx - Instructions de base
    NOP  = 0x00,  // No Operation
    LDA  = 0x01,  // Load Accumulator
    STA  = 0x02,  // Store Accumulator
    ADD  = 0x03,  // Add
    SUB  = 0x04,  // Subtract
    AND  = 0x05,  // Logical AND
    OR   = 0x06,  // Logical OR
    XOR  = 0x07,  // Exclusive OR
    CMP  = 0x08,  // Compare
    JMP  = 0x09,  // Jump
    JZ   = 0x0A,  // Jump if Zero
    JNZ  = 0x0B,  // Jump if Not Zero
    INC  = 0x0C,  // Increment
    DEC  = 0x0D,  // Decrement
    SHL  = 0x0E,  // Shift Left
    SHR  = 0x0F,  // Shift Right

    // 01xx xxxx - Instructions avancées
    PUSH = 0x10,  // Push onto Stack
    POP  = 0x11,  // Pop from Stack
    CALL = 0x12,  // Call subroutine
    RET  = 0x13,  // Return from subroutine
    OUT  = 0x14,  // Output to port
    IN   = 0x15,  // Input from port
    MOV  = 0x16,  // Move/Transfer Data
    CLR  = 0x17,  // Clear Register
    NOT  = 0x18,  // Logical NOT
    MUL  = 0x19,  // Multiply
    DIV  = 0x1A,  // Divide
    MOD  = 0x1B,  // Modulo
    SWAP = 0x1C,  // Swap two registers
    ROL  = 0x1D,  // Rotate Left
    ROR  = 0x1E,  // Rotate Right
    SET  = 0x1F,  // Set Flag/Register

    // 10xx xxxx - Instructions de gestion mémoire
    LOAD  = 0x20,  // Load from memory
    STORE = 0x21,  // Store to memory
    LDI   = 0x22,  // Load Immediate
    STI   = 0x23,  // Store Immediate
    LDX   = 0x24,  // Load Indexed
    STX   = 0x25,  // Store Indexed
    LDR   = 0x26,  // Load Relative
    STR   = 0x27,  // Store Relative
    LDM   = 0x28,  // Load Multiple
    STM   = 0x29,  // Store Multiple
    PUSHA = 0x2A,  // Push All Registers
    POPA  = 0x2B,  // Pop All Registers
    LDZ   = 0x2C,  // Load Zero Page
    STZ   = 0x2D,  // Store Zero Page
    MOVE  = 0x2E,  // Move Memory Block
    CMPM  = 0x2F,  // Compare Memory Block

    // 11xx xxxx - Instructions de gestion de drapeaux et interruptions
    CLF   = 0x30,  // Clear Flag
    STF   = 0x31,  // Set Flag
    SEI   = 0x32,  // Set Interrupt Enable
    CLI   = 0x33,  // Clear Interrupt Enable
    BRK   = 0x34,  // Break / Interrupt
    NMI   = 0x35,  // Non-Maskable Interrupt
    RESET = 0x36,  // Reset CPU
    HALT  = 0x37,  // Halt execution
    SLEEP = 0x38,  // Sleep mode
    WAKE  = 0x39,  // Wake from sleep
    ISR   = 0x3A,  // Interrupt Service Routine
    WAIT  = 0x3B,  // Wait for Event
    POLL  = 0x3C,  // Poll for Event
    TRAP  = 0x3D,  // Software Trap
    DI    = 0x3E,  // Disable Interrupts
    EI    = 0x3F   // Enable Interrupts
};

#endif  //  OPCODES_H