#ifndef SOCIO_NORMAL_H
#define SOCIO_NORMAL_H

#include <iostream>
#include "SocioTorcedor.hpp"

class SocioNormal : public SocioTorcedor
{   
public:
    SocioNormal();
    SocioNormal(std::string nome, std::string cpf);

    ~SocioNormal();
    
};


#endif // SOCIO_TORCEDOR_H