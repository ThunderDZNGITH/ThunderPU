#include "vga.hpp"

VGA::VGA(){
    window.create(sf::VideoMode(640, 480), "CrapyPU - VGA Test");
    if (!biosFont.loadFromFile("res/clacon2.ttf"))
    {
        // error...
    }
    const_cast<sf::Texture&>(biosFont.getTexture(20)).setSmooth(false);

}

void VGA::VGAPrint(char Char, int posX, int posY){
    sf::Text text;
    text.setFont(VGA::biosFont);
    text.setString(Char);
    text.setCharacterSize(20);
    text.setPosition(((posX)*10)+1, ((posY)*10)+(5*posY)-6);
    VGA::window.draw(text);
} 

void VGA::VGAPrintString(std::string String, int posX, int posY){
    sf::Text text;
    text.setFont(VGA::biosFont);
    text.setString(String);
    text.setCharacterSize(20);
    text.setPosition(((posX)*10)+1, ((posY)*10)+(5*posY)-6);
    VGA::window.draw(text);
} 

void VGA::readMemory(byte memory[]){
    for(int i = 0; i < 32; i++){
        for(int j = 0; j < 64; j++){
            int index = i * 64 + j;
            VGAPrint(memory[index], j, i);
        } 
    } 
} 