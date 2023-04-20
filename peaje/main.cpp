#include <iostream>
#include "Peaje.h"

using namespace std;

int main() {
    Peaje peaje;
    peaje.cobrarPeajes();
    cout << "El monto recaudado en el dia es de: " << peaje.obtenerMontoRecaudado() << " pesos " << endl;
    return 0;
}