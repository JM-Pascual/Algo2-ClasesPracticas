#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
public:
    explicit Auto(bool telepase);

    void aplicarDescuento(float& montoAPagar) override;

    void aplicarBase(float& montoAPagar) override;
};

#endif