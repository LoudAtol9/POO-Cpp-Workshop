#include "../modelos/SocioPlus.hpp"

SocioPlus::SocioPlus()
{
    SocioPlus::listaEndereco.setSize(sizeof(Endereco));
	SocioPlus::pessoasIndicadas.setSize(sizeof(Pessoa));

    SocioPlus::valorExtra = 5.0;
    SocioPlus::valorInicial = 50.0;
    SocioPlus::limiteIndicacao = 3;
    SocioPlus::calculaValorFinal();
}

SocioPlus::SocioPlus(std::string nome, std::string cpf)
{
    SocioPlus::listaEndereco.setSize(sizeof(Endereco));
	SocioPlus::pessoasIndicadas.setSize(sizeof(Pessoa));

    SocioPlus::nome = nome;
    SocioPlus::cpf = cpf;
    SocioPlus::valorExtra = 5.0;
    SocioPlus::valorInicial = 50.0;
    SocioPlus::limiteIndicacao = 3;
    SocioPlus::calculaValorFinal();
}

/*
 * Mudança de Plano:
 *
 * Pega um Socio e transforma em SocioPlus
 * e APAGA o Socio
 * (leva a indicação do VIP pro Plus)
 */
SocioPlus::SocioPlus(SocioTorcedor* s)
{
    SocioPlus::nome = s->getNome();
    SocioPlus::cpf = s->getCpf();
    SocioPlus::dataNascimento = s->getDataNascimento();
    SocioPlus::dataIngresso = s->getDataIngresso();
    SocioPlus::listaEndereco = s->getListaEndereco();
    SocioPlus::telefone = s->getTelefone();
    SocioPlus::setPessoaIndicada(s->getPessoaIndicada(0));

    SocioPlus::valorExtra = 5.0;
    SocioPlus::valorInicial = 50.0;
    SocioPlus::limiteIndicacao = 3;
    SocioPlus::calculaValorFinal();

    delete s;
}

SocioPlus::~SocioPlus()
{

}