#include "tiburon.h"

Tiburon::Tiburon(const std::string& nombre) : Pez(nombre) {}

void Tiburon::nadar() {
    std::cout << "Soy el TIBURON " << nombre << " nadando" << std::endl;
}