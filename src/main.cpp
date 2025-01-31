#include <iostream>
#include <bitset> 
#include <iomanip> 
#include "registers.hpp"
#include "alu.hpp" 
#include "vga.hpp"
#include "memory.hpp"

//  For debug 
void printVideoMem(Memory memory){
    for(int i = 0; i < 32; i++){
        for(int j = 0; j < 64; j++){
            std::cout << memory.videoMemory[i*32+j];  
        }
        std::cout << std::endl;
    } 
} 
void putStrInMem(std::string str, Memory memory){
    for (size_t i = 0; i < str.size(); ++i) {
        // Calcul de l'adresse mémoire à partir de (65536 - 2048) + i
        unsigned int address = (65536 - 2048) + i;
        memory.writeToMemory(address, str[i]);
    }
}  

int main(){

    Registers reg;
    ALU alu;
    VGA vga;
    Memory memory;

    std::string str = "ThunderPU - 1.0.0 - Pre Release";
    putStrInMem(str, memory);
    printVideoMem(memory);

    while (vga.window.isOpen())
    {
        for (auto event = sf::Event(); vga.window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                vga.window.close();
            }
        }

    vga.window.clear();
    vga.readMemory(memory.videoMemory);
    vga.window.display();
    } 

    for(int i = 0; i < 15; i++){
        std::cout << "0x" << std::hex << std::uppercase << i << " " << std::bitset<16>(reg.readFromRegister(static_cast<Registers::regIndex>(i))) << " 0x" << std::hex << std::setw(4) << std::setfill('0') << std::uppercase << reg.readFromRegister(static_cast<Registers::regIndex>(i)) << std::dec << " " << reg.readFromRegister(static_cast<Registers::regIndex>(i)) << std::endl;
    }  
    return 0;
}