#ifndef GAVIOTA_H
#define GAVIOTA_H

#include "ave.h"

class Pelicano : public Ave {
public:
    explicit Pelicano(const std::string& nombre);

protected:
    void volar() override;
};

#endif