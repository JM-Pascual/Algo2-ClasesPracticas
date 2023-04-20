#include "animal.h"

Animal::Animal(const std::string& nombre) {
    this->nombre = nombre;
}

Animal::Animal() {
    this->nombre = "animal";
}