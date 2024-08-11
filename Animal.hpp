#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {

    private:
    std::string name;
    
    public :
    Animal();
    Animal(std::string name);
    std::string getName();
    virtual void print();

};

#endif