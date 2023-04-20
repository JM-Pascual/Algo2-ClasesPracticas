#ifndef PEZ_PAYASO_H
#define PEZ_PAYASO_H

#include "pez.h"

class PezPayaso : public Pez {
public:
    explicit PezPayaso(const std::string& nombre);

protected:
    void nadar() override;
};

#endif