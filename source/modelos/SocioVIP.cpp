#include "../modelos/SocioVIP.hpp"

SocioVIP::SocioVIP()
{
    SocioVIP::listaEndereco.setSize(sizeof(Endereco));
	SocioVIP::pessoasIndicadas.setSize(sizeof(Pessoa));

    SocioVIP::valorExtra = 3.0;
    SocioVIP::valorInicial = 50.0;
    SocioVIP::limiteIndicacao = 1;
    SocioVIP::calculaValorFinal();
}

SocioVIP::SocioVIP(std::string nome, std::string cpf)
{
    SocioVIP::listaEndereco.setSize(sizeof(Endereco));
	SocioVIP::pessoasIndicadas.setSize(sizeof(Pessoa));

    SocioVIP::nome = nome;
    SocioVIP::cpf = cpf;
    SocioVIP::valorExtra = 3.0;
    SocioVIP::valorInicial = 50.0;
    SocioVIP::limiteIndicacao = 1;
    SocioVIP::calculaValorFinal();
}


/*
 * Mudança de Plano:
 *
 * Pega um Socio e transforma em SocioVIP
 * e APAGA o Socio
 * (leva a primeira indicacao apenas pro VIP)
 */
SocioVIP::SocioVIP(SocioTorcedor* s)
{
    SocioVIP::nome = s->getNome();
    SocioVIP::cpf = s->getCpf();
    SocioVIP::dataNascimento = s->getDataNascimento();
    SocioVIP::dataIngresso = s->getDataIngresso();
    SocioVIP::listaEndereco = s->getListaEndereco();
    SocioVIP::telefone = s->getTelefone();
    SocioVIP::setPessoaIndicada(s->getPessoaIndicada(0));

    SocioVIP::valorExtra = 3.0;
    SocioVIP::valorInicial = 50.0;
    SocioVIP::limiteIndicacao = 0;
    SocioVIP::calculaValorFinal();
}

SocioVIP::~SocioVIP()
{
    
}