#ifndef MOTO_H
#define MOTO_H

#include "Vehiculo.h"

class Moto : public Vehiculo {
public:
    explicit Moto(bool telepase);

    void aplicarBase(float& montoAPagar) override;
};

#endif