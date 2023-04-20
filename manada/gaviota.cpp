#include "gaviota.h"

Gaviota::Gaviota(const std::string& nombre) : Ave(nombre) {}

void Gaviota::volar() {
    std::cout << "Soy la GAVIOTA " << nombre << " volando" << std::endl;
}