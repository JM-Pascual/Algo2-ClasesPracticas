#ifndef LECTOR_H
#define LECTOR_H

#include <string>
#include "Peaje.h"

class Lector {
public:
    static void leerDatos(const std::string& path, Peaje* peaje);

    static Vehiculo* generarVehiculo(unsigned int ruedas, bool telepase);
};

#endif
