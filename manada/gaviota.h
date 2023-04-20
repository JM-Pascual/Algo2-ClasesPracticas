#ifndef AGUILA_H
#define AGUILA_H

#include "ave.h"

class Gaviota : public Ave {
public:
    explicit Gaviota(const std::string& nombre);

protected:
    void volar() override;
};

#endif