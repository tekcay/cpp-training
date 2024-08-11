#ifndef CHAT_HPP
#define CHAT_HPP

#include <string>
#include "Animal.hpp"

class Chat : Animal {

    private :
    std::string couleur;

    public :
    Chat(std::string name, std::string couleur);
    std::string getCouleur();
    void print() override;
    
};
        

#endif