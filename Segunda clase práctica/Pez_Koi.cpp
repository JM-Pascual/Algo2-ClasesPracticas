#include "Pez_Koi.hpp"

using namespace std;

Pez_Koi::Pez_Koi(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}

void Pez_Koi::alimentarse(){
    cout<<"Hola! Soy "<<nombre<<" el pez Koi, y me gusta comer plantas! :)"<<endl;
}

Pez_Koi::~Pez_Koi(){};