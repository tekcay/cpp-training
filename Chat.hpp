#ifndef CHAT_HPP
#define CHAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Chat : public Animal {

    private:
    std::string couleur;


    public:
    Chat(std::string name, std::string couleur) : Animal(name), couleur(couleur) {}

    std::string getCouleur() {
        return couleur;
    }

    void print() {
        std::cout << getCouleur() << "\n" << getName() << "\n" ;
    }

};

#endif