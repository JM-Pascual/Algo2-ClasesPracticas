#include "Peaje.h"
#include<string>

#include "Lector.h"

using namespace std;

const string PATH = "vehiculos.txt";
const int PRECIO_POR_RUEDA = 10;

Peaje::Peaje() {
    this->cantidadDeVehiculos = 0;
    this->precioPorRueda = PRECIO_POR_RUEDA;
    this->montoRecaudado = 0;
    Lector::leerDatos(PATH, this);
}

void Peaje::cargarVehiculo(Vehiculo* vehiculo) {
    vehiculos[cantidadDeVehiculos] = vehiculo;
    cantidadDeVehiculos++;
}

void Peaje::cobrarPeajes() {
    for (size_t i = 0; i < cantidadDeVehiculos; i++) {
        montoRecaudado += vehiculos[i]->montoAPagar(precioPorRueda);
        // No deberia ser una responsabilidad del Peaje, que en esencia es un vector. Sin embargo, lo dejo por
        // simplicidad. Conceptualmente, los vehiculos pagan el costo del peaje y siguen su camino.
        delete vehiculos[i];
    }
}

float Peaje::obtenerMontoRecaudado() const {
    return this->montoRecaudado;
}
