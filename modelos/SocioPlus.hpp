#ifndef SOCIO_PLUS_H
#define SOCIO_PLUS_H

#include <iostream>
#include "SocioTorcedor.hpp"

class SocioPlus : public SocioTorcedor
{   
public:
    SocioPlus();
    SocioPlus(std::string nome, std::string cpf);

    ~SocioPlus();
};


#endif // SOCIO_Plus_H