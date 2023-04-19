#include "Pez_Payaso.hpp"

using namespace std;

Pez_Payaso::Pez_Payaso(string nombre, int edad){
    this->nombre = nombre;
    this->edad = edad;
}

void Pez_Payaso::alimentarse(){
    cout<<"Hola! Soy "<<nombre<<" el pez Payaso, y me gusta comer algas! c:"<<endl;
}

Pez_Payaso::~Pez_Payaso(){};