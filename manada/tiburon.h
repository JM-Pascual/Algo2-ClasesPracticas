#ifndef TIBURON_H
#define TIBURON_H

#include "pez.h"

class Tiburon : public Pez {
public:
    explicit Tiburon(const std::string& nombre);

protected:
    void nadar() override;
};

#endif