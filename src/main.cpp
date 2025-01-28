#include <iostream>
#include <bitset> 
#include <iomanip> 
#include <random> 
#include "registers.hpp"

int main(){

    Registers reg;

    // Générateur de nombres aléatoires
    std::random_device rd;
    std::mt19937 gen(rd());

    // Distribution uniforme pour générer un nombre entre 0 et 65535 (16 bits)
    std::uniform_int_distribution<unsigned short> dist(0, 65535);


    for(int i = 0; i < 15; i++){
        // Génération du nombre aléatoire
        unsigned short randomNumber = dist(gen);
        reg.writeToRegister(static_cast<Registers::regIndex>(i), randomNumber);
    } 

    for(int i = 0; i < 15; i++){
        std::cout << "0x" << std::hex << std::uppercase << i << " " << std::bitset<16>(reg.readFromRegister(static_cast<Registers::regIndex>(i))) << " 0x" << std::hex << std::setw(4) << std::setfill('0') << std::uppercase << reg.readFromRegister(static_cast<Registers::regIndex>(i)) << std::endl;
    }   
} 