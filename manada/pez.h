#ifndef PEZ_H
#define PEZ_H

#include "animal.h"

class Pez : public Animal {
public:
    void moverse() override;

    explicit Pez(const std::string& nombre);

protected:
    virtual void nadar() = 0;
};

#endif