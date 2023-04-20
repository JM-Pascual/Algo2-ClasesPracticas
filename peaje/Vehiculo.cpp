#include "Vehiculo.h"

Vehiculo::Vehiculo(bool telepase) {
    this->telepase = telepase;
}

float Vehiculo::montoAPagar(unsigned int precioPorRueda) {
    auto monto = float(precioPorRueda * cantidadDeRuedas);
    aplicarBase(monto);
    aplicarDescuento(monto);
    return monto;
}

Vehiculo::~Vehiculo() = default;