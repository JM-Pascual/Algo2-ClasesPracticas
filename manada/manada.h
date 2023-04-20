#include "animal.h"
#include "tiburon.h"
#include <list>
#include <iostream>

using namespace std;

// Para los interesados, lo que se aplica aca es un patron de diseño llamado "Decorator".
// En esencia, lo que esta pasando es que se declara una template class que hereda de list<Tipo> publicamente, es decir,
// hereda todos los metodos de list de stl y pueden accederse libremente mediante Manada. De esta forma, se puede
// agregar nuevos comportamientos especificos al ejercicio planteado.
template<typename Tipo>
class Manada : public list<Tipo> {
public:
    Manada();

    void agregarAnimal(string nombre);

    void moverAnimales();
};

template<typename Tipo>
Manada<Tipo>::Manada(): list<Tipo>() {}

// Este metodo no funciona si el tipo de dato es un puntero a una clase.
template<typename Tipo>
void Manada<Tipo>::agregarAnimal(string nombre) {
    Tipo animal(nombre);
    this->push_back(animal);
}

// Este metodo no esta muy copado porque el template asume que la clase tiene un metodo "moverse()". Mas aun, no
// funciona si el tipo de dato es un puntero a la clase. Sin embargo, lo dejo para que quede la idea del decorador y
// para que tambien se vea el llamado polimorfico a todos los animales dentro de la manada.
// Lo correcto seria hacer esta iteracion por fuera del template class.
template<typename Tipo>
void Manada<Tipo>::moverAnimales() {
    for (auto animal = this->begin(); animal != this->end(); animal++) {
        animal->moverse();
    }
}