#ifndef _PEZ_KOI_HPP_
#define _PEZ_KOI_HPP_

#include "Pez.hpp"

using namespace std;

class Pez_Koi: private Pez{
public:
    Pez_Koi(string nombre, int edad);

    void alimentarse();

    ~Pez_Koi();
};


#endif