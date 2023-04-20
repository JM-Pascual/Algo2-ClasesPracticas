#include "Camion.h"
#include "Auto.h"
#include "Moto.h"
#include <string>
#include "Peaje.h"
#include "Lector.h"
#include <fstream>
#include <iostream>

using namespace std;

class VehiculoNoValidoException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: La cantidad de ruedas no es par.";
    }
};

Vehiculo* Lector::generarVehiculo(unsigned int ruedas, bool telepase) {
    if (ruedas % 2 == 0) {
        switch (ruedas) {
            case 2:
                return new Moto(telepase);
            case 4:
                return new Auto(telepase);
            default:
                return new Camion(ruedas, telepase);
        }
    } else {
        throw VehiculoNoValidoException();
    }
}

void Lector::leerDatos(const string& path, Peaje* peaje) {
    ifstream archivo;
    archivo.open(path);
    unsigned int ruedas;
    bool telepase;

    if (!archivo) {
        cout << "No se pudo leer el archivo: " << path << endl;
        exit(1);
    }
    while (archivo >> ruedas >> telepase) {
        peaje->cargarVehiculo(generarVehiculo(ruedas, telepase));
    }
    archivo.close();
}