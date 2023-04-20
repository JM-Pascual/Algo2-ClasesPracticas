#include "Pez_Globo.hpp"

using namespace std;

Pez_Globo::Pez_Globo(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}

void Pez_Globo::alimentarse(){
    cout<<"Hola! Soy "<<nombre<<" el pez Globo, y me gusta comer plantas! :O"<<endl;
}

Pez_Globo::~Pez_Globo(){};