#include "Pessoa.hpp"

Pessoa::Pessoa(){}

Pessoa::Pessoa(std::string new_nome, std::string new_cpf, Data new_dataNascimento)
{
    Pessoa::nome = new_nome;
    Pessoa::cpf = new_cpf;
    Pessoa::dataNascimento = new_dataNascimento;
}

void Pessoa::setNome(std::string new_nome)
{
    Pessoa::nome = new_nome;
}

std::string Pessoa::getNome()
{
    return Pessoa::nome;
}

void Pessoa::setCpf(std::string new_cpf)
{
    Pessoa::cpf = new_cpf;
}

std::string Pessoa::getCpf()
{
    return Pessoa::cpf;
}

void Pessoa::setDataNascimento(Data new_dataNascimento)
{
    Pessoa::dataNascimento = new_dataNascimento;
}

Data Pessoa::getDataNascimento()
{
    return Pessoa::dataNascimento;
}
    
std::string Pessoa::toString()
{
    return Pessoa::nome;
}