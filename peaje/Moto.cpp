#include "Moto.h"

Moto::Moto(bool telepase) : Vehiculo(telepase) {
    this->cantidadDeRuedas = 2;
}

void Moto::aplicarBase(float& montoAPagar) {
    montoAPagar += 20;
}