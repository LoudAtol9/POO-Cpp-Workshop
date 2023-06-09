#include "SocioPlus.hpp"

SocioPlus::SocioPlus()
{
    SocioPlus::valorExtra = 1.0;
    SocioPlus::valorInicial = 50.0;
    SocioPlus::limiteIndicacao = 3;
    SocioPlus::calculaValorFinal();
}

SocioPlus::SocioPlus(std::string nome, std::string cpf)
{
    SocioPlus::nome = nome;
    SocioPlus::cpf = cpf;
    SocioPlus::valorExtra = 1.0;
    SocioPlus::valorInicial = 50.0;
    SocioPlus::limiteIndicacao = 3;
    SocioPlus::calculaValorFinal();
}

SocioPlus::~SocioPlus()
{
    
}