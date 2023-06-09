#include "Pessoa.hpp"

Pessoa::Pessoa(){}

Pessoa::Pessoa(Pessoa* ptr_pessoa)
{
    Pessoa::nome = ptr_pessoa->getNome();
    Pessoa::cpf = ptr_pessoa->getCpf();
    Pessoa::dataNascimento = ptr_pessoa->getDataNascimento();
    Pessoa::telefone = ptr_pessoa->getTelefone();
    Pessoa::listaEndereco.setSize(sizeof(Endereco));
    Pessoa::listaEndereco = ptr_pessoa->getListaEndereco(); 
}

Pessoa::Pessoa(std::string new_nome, std::string new_cpf, Data new_dataNascimento, std::string new_telefone)
{
    Pessoa::setNome(new_nome);
    Pessoa::setCpf(new_cpf);
    Pessoa::setDataNascimento(new_dataNascimento);
    Pessoa::setTelefone(new_telefone);
    Pessoa::listaEndereco.setSize(sizeof(Endereco)); 
}

Pessoa::~Pessoa()
{
    Pessoa::listaEndereco.~MyLinkedList();
}


void Pessoa::setNome(std::string new_nome)
{
    std::regex str_regex("[a-zA-Z][a-zA-Z]* ?");

    if (std::regex_match(new_nome, str_regex))
        Pessoa::nome = new_nome;

}

std::string Pessoa::getNome()
{
    return Pessoa::nome;
}


void Pessoa::setCpf(std::string new_cpf)
{
    std::regex str_regex("[0-9]{3}[.]?[0-9]{3}[.]?[0-9]{3}[-]?[0-9]{2}");

    if (std::regex_match(new_cpf, str_regex))
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

void Pessoa::setDataNascimento(int new_dia, int new_mes, int new_ano)
{
    Pessoa::dataNascimento.setDia(new_dia);
    Pessoa::dataNascimento.setMes(new_mes);
    Pessoa::dataNascimento.setAno(new_ano);
}

Data Pessoa::getDataNascimento()
{
    return Pessoa::dataNascimento;
}


void Pessoa::setTelefone(std::string new_telefone)
{
    std::regex str_regex("^(?[1-9]{2})? ?[0-9]{5}[- ]?[0-9]{4}$");
    if (std::regex_match(new_telefone, str_regex))
        Pessoa::telefone = new_telefone;
}

std::string Pessoa::getTelefone()
{
    return Pessoa::telefone;
}
    

void Pessoa::setEndereco(Endereco new_endereco)
{
    Endereco* new_ptr = new Endereco(&new_endereco);
    Pessoa::listaEndereco.insere(new_ptr);
    delete new_ptr;
}

Endereco Pessoa::getEndereco(int index)
{
    Endereco* ptr = (Endereco*) Pessoa::listaEndereco.busca(index);
    Endereco elem(ptr);
    free(ptr); 
    return elem;
}

MyLinkedList Pessoa::getListaEndereco()
{
    return Pessoa::listaEndereco.deepCopy();
}


std::string Pessoa::toString()
{
    return Pessoa::nome;
}