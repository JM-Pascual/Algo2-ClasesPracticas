#ifndef SISTEMA_H
#define SISTEMA_H

#include "Vehiculo.h"

const int MAX_VEHICULOS = 100;

class Peaje {
private:
    Vehiculo* vehiculos[MAX_VEHICULOS]{};
    unsigned int cantidadDeVehiculos;
    unsigned int precioPorRueda;
    float montoRecaudado;
public:
    Peaje();

    void cargarVehiculo(Vehiculo* vehiculo);

    void cobrarPeajes();

    float obtenerMontoRecaudado() const;
};


#endif
