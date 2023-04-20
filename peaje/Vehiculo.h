#ifndef VEHICULO_H
#define VEHICULO_H

#include <cstddef>

class Vehiculo {
protected:
    size_t cantidadDeRuedas{};
    bool telepase;

    explicit Vehiculo(bool telepase);

    virtual void aplicarDescuento(float& montoAPagar) {};

    virtual void aplicarBase(float& montoAPagar) = 0;

public:
    float montoAPagar(unsigned int precioPorRueda);

    virtual ~Vehiculo();
};

#endif