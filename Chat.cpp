#include <iostream>
#include "Chat.hpp"
#include "Animal.hpp"

Chat::Chat(std::string name, std::string couleur) {
    Chat::name = name;
    Chat::couleur =  couleur;
}

std::string Chat::getCouleur() {
    return Chat::couleur;
}

void Chat::print() {
    std::cout << Chat::getCouleur() << "\n" << Chat::getName() << "\n" ;
}