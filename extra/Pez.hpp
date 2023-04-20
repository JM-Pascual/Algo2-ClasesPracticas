#ifndef _PEZ_HPP_
#define _PEZ_HPP_

#include <iostream>
#include <string>


using namespace std;

// Pez es una clase abstracta.

// Una clase se considera abstracta cuando al menos uno de sus métodos es de carácter abstracto, es decir, que deja (en parte o totalmente)-
// la implementación de su lógica a las clases que hereden de ella.


class Pez{
public:
    string nombre;

    virtual void alimentarse() = 0; // Método abstracto  ---> Responsabilidad de las clases hijas/subclases implementarlo
                                   // Al ser también virtual puro, las clases hijas están obligadas a implementarlo.

    virtual ~Pez(){}; 
protected:
    int edad;

private: // Atributos privados, solo accesibles desde la clase Pez.
        // Por ende NO serán heredados.
    bool esta_alimentado;

};


#endif