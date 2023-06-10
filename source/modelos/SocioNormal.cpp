#include "../modelos/SocioNormal.hpp"


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


/*
 * Downgrade de Plano:
 *
 * Pega o SocioVIP e transforma em SocioNormal
 * e APAGA o Socio VIP
 * (perde indicacoes salvas)
 */
SocioNormal::SocioNormal(SocioTorcedor* s)
{
    SocioNormal::nome = s->getNome();
    SocioNormal::cpf = s->getCpf();
    SocioNormal::dataNascimento = s->getDataNascimento();
    SocioNormal::dataIngresso = s->getDataIngresso();
    SocioNormal::listaEndereco = s->getListaEndereco();
    SocioNormal::telefone = s->getTelefone();

    SocioNormal::valorExtra = 1.0;
    SocioNormal::valorInicial = 50.0;
    SocioNormal::limiteIndicacao = 0;
    SocioNormal::calculaValorFinal();

    delete s;
}

SocioNormal::~SocioNormal()
{
    
}


