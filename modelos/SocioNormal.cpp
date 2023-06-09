#include "SocioNormal.hpp"

SocioNormal::SocioNormal()
{
    SocioNormal::valorExtra = 1.0;
    SocioNormal::valorInicial = 50.0;
    SocioNormal::calculaValorFinal();
}

SocioNormal::SocioNormal(std::string nome, std::string cpf)
{
    SocioNormal::nome = nome;
    SocioNormal::cpf = cpf;
    SocioNormal::valorExtra = 1.0;
    SocioNormal::valorInicial = 50.0;
    SocioNormal::limiteIndicacao = 0;
    SocioNormal::calculaValorFinal();
}

SocioNormal::~SocioNormal()
{
    
}

