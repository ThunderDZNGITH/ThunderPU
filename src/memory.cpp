#include "memory.hpp"
#include <cstring>


Memory::Memory(){
    for(int i = 0; i < 65535; i++){
        memory[i] = 0; 
    } 
    for(int i = 65536-2048; i < 65536 ; i++){
        memory[i] = ' ';
    } 
    std::memcpy(videoMemory, &memory[65536 - 2048], 2048);
} 

void Memory::writeToMemory(word address, byte value){
    memory[address] = value; 
    std::memcpy(videoMemory, &memory[65536 - 2048], 2048);
} 
byte Memory::readFromMmeory(word address){
    return memory[address]; 
} 