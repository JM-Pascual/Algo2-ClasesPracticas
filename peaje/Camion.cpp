#include "Camion.h"

Camion::Camion(unsigned int cantidadDeRuedas, bool telepase) : Vehiculo(telepase) {
    this->cantidadDeRuedas = cantidadDeRuedas;
}

void Camion::aplicarDescuento(float& montoAPagar) {
    if (this->telepase) {
        montoAPagar *= float(0.90);
    }
}

void Camion::aplicarBase(float& montoAPagar) {
    montoAPagar += 100;
}
