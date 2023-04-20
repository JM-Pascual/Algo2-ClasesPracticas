#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
protected:
    std::string nombre;

public:
    explicit Animal(const std::string& nombre);

    Animal();

    virtual void moverse() = 0;
};

#endif