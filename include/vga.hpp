#ifndef VGA_H
#define VGA_H 

#include <SFML/Graphics.hpp>

using byte = unsigned char;

class VGA{
    public:
    sf::RenderWindow window;
    sf::Font biosFont;

    VGA();

    void VGAPrint(char Char, int poxX, int posY);
    void VGAPrintString(std::string String, int posX, int posY); 

    void readMemory(byte memory[]);

};

#endif  //  VGA_H