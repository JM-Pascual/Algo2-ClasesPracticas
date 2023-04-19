#ifndef _PEZ_PAYASO_HPP_
#define _PEZ_PAYASO_HPP_

#include "Pez.hpp"

using namespace std;

class Pez_Payaso: public Pez{
public:
    Pez_Payaso(string nombre, int edad);

    void alimentarse();

    ~Pez_Payaso();
};


#endif
