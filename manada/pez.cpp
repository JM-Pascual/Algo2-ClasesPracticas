#include "pez.h"

Pez::Pez(const std::string& nombre) : Animal(nombre) {}

void Pez::moverse() {
    nadar();
}