#ifndef _PEZ_GLOBO_HPP_
#define _PEZ_GLOBO_HPP_

#include "Pez.hpp"

using namespace std;

class Pez_Globo: protected Pez{
public:
    Pez_Globo(string nombre, int edad);

    void alimentarse();

    ~Pez_Globo();
};


#endif