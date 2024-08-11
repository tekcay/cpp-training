#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {

    private:
    std::string name;

    public:
    Animal(std::string name) : name(name){}

    std::string getName() {
        return name;
    }

    virtual void print() {
        std::cout << "Animal name : " << "\n" << getName() << "\n";
    }

};

#endif