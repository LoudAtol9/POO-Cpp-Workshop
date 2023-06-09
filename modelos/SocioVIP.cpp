#include "SocioVIP.hpp"

SocioVIP::SocioVIP()
{
    SocioVIP::valorExtra = 1.0;
    SocioVIP::valorInicial = 50.0;
    SocioVIP::limiteIndicacao = 1;
    SocioVIP::calculaValorFinal();
}

SocioVIP::SocioVIP(std::string nome, std::string cpf)
{
    SocioVIP::nome = nome;
    SocioVIP::cpf = cpf;
    SocioVIP::valorExtra = 1.0;
    SocioVIP::valorInicial = 50.0;
    SocioVIP::limiteIndicacao = 1;
    SocioVIP::calculaValorFinal();
}

SocioVIP::~SocioVIP()
{
    
}