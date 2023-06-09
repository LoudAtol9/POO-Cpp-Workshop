#ifndef SOCIO_PLUS_H
#define SOCIO_PLUS_H

#include <iostream>
#include "../modelos/SocioTorcedor.hpp"
#include "../modelos/SocioVIP.hpp"

class SocioPlus : public SocioTorcedor
{   
public:
    SocioPlus();
    SocioPlus(std::string nome, std::string cpf);
    SocioPlus(SocioTorcedor* s);

    ~SocioPlus();

    
};


#endif // SOCIO_Plus_H