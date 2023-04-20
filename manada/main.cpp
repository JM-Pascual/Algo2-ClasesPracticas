#include "pez_payaso.h"
#include "tiburon.h"
#include "pelicano.h"
#include "gaviota.h"
#include "manada.h"

using namespace std;

int main() {
    PezPayaso pezPayaso("Nemo");
    Tiburon tiburon("Bruce");
    Pelicano pelicano("Nigel");
    Gaviota gaviota("Nohay");

    Manada<Animal*> manada;
    manada.push_back(&pezPayaso);
    manada.push_back(&tiburon);
    manada.push_back(&pelicano);
    manada.push_back(&gaviota);


    Manada<PezPayaso> manadaPeces;
    manadaPeces.agregarAnimal("Marlin");
    manadaPeces.agregarAnimal("Coral");
    manadaPeces.agregarAnimal("Marlin junior");

    Manada<Gaviota> manadaAves;
    manadaAves.agregarAnimal("Mar");
    manadaAves.agregarAnimal("Cora");
    manadaAves.agregarAnimal("Marl junior");

    for (auto animal: manada) {
        animal->moverse();
    }
    manadaPeces.moverAnimales();
    manadaAves.moverAnimales();
    cout << "La manada de aves tiene " << manadaAves.size() << " aves." << endl;
}