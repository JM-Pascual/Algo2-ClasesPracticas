#ifndef CAMION_H
#define CAMION_H

#include "Vehiculo.h"

class Camion : public Vehiculo {
public:
    Camion(unsigned int cantidadDeRuedas, bool telepase);

    void aplicarDescuento(float& montoAPagar) override;

    void aplicarBase(float& montoAPagar) override;
};

#endif