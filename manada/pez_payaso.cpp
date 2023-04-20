#include "pez_payaso.h"

PezPayaso::PezPayaso(const std::string& nombre) : Pez(nombre) {}

void PezPayaso::nadar() {
    std::cout << "Soy el PEZ PAYASO " << nombre << " nadando" << std::endl;
}