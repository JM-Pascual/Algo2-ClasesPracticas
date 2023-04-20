#include "ave.h"

Ave::Ave(const std::string& nombre) : Animal(nombre) {}

void Ave::moverse() {
    volar();
}