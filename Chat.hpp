#ifndef CHAT_HPP
#define CHAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Chat : Animal {

    private :
    std::string name, couleur;

    public :
    Chat(std::string name, std::string couleur);
    std::string getCouleur();
    void print();
    
};
        

#endif