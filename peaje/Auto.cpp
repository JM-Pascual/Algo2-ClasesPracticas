#include "Auto.h"

Auto::Auto(bool telepase) : Vehiculo(telepase) {
    this->cantidadDeRuedas = 4;
}

void Auto::aplicarDescuento(float& montoAPagar) {
    if (this->telepase) {
        montoAPagar *= float(0.95);
    }
}

void Auto::aplicarBase(float& montoAPagar) {
    montoAPagar += 50;
}
