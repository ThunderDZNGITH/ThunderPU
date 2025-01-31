#ifndef MEMORY_H
#define MEMORY_H

#include "utils.hpp"

class Memory{

public:
Memory();

byte memory[65536];
byte videoMemory[2048]; 

void writeToMemory(word address, byte value);
byte readFromMmeory(word address);

};

#endif   // MEMORY_H