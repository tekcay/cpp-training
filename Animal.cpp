#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal(std::string name) {
    Animal::name = name;
}

Animal::Animal() {
    Animal::name = "";
}

std::string Animal::getName() {
    return Animal::name;
}

void Animal::print() {
    std::cout << "Animal name : " << "\n" << Animal::getName() << "\n";
}