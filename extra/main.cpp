#include <iostream>
#include <string>

#include <vector> // Biblioteca standar de C++, en este caso la estructura de datos vector

#include "Pez_Payaso.hpp"
#include "Pez_Koi.hpp"
#include "Pez_Globo.hpp"


using namespace std;

int main(){
    Pez_Payaso* pez_payaso = new Pez_Payaso("Nemo", 1);
    Pez_Koi* pez_koi = new Pez_Koi("Haku", 2);
    Pez_Globo* pez_globo = new Pez_Globo("Globo", 3);

    vector<Pez*> pecera;




    // Debido a la herencia protegida y privada de las clases Pez_Globo y Pez_Koi, no se puede hacer lo siguiente:
    
    /*
    pecera.push_back(pez_payaso);
    pecera.push_back(pez_koi);
    pecera.push_back(pez_globo);

    for(int i = 0; i < (int)pecera.size(); i++){
        pecera[i]->alimentarse();
    }

    
    */

    delete pez_payaso;
    delete pez_koi;
    delete pez_globo;

    /* Liberación de memoria con una recorrida del vector: 

    for(int i= 0; i < pecera.size(); i++){
        delete pecera[i];
    }

    */
    
    
    return 0;
}