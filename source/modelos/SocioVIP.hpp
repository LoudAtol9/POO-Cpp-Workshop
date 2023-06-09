#ifndef SOCIO_VIP_H
#define SOCIO_VIP_H

#include <iostream>
#include "../modelos/SocioTorcedor.hpp"

class SocioVIP : public SocioTorcedor
{   
public:
    SocioVIP();
    SocioVIP(std::string nome, std::string cpf);
    SocioVIP(SocioTorcedor* s);

    ~SocioVIP();

};


#endif // SOCIO_VIP_H