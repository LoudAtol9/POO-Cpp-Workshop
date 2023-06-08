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

Pessoa::~Pessoa(){}


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
}

Endereco Pessoa::getEndereco(int index)
{
    Endereco* ptr = (Endereco*) Pessoa::listaEndereco.busca(index);
    Endereco elem(ptr);
    return elem;
}

MyLinkedList Pessoa::getListaEndereco()
{
    int i;
    int len = Pessoa::listaEndereco.getlength(); 

    Endereco* ptr_endereco;
    Endereco* ptr_endereco_copy;

    MyLinkedList listRetorno(sizeof(Endereco));

    for (i = 0; i <= len; i++)
    {
        ptr_endereco = (Endereco*) listaEndereco.busca(i);
        ptr_endereco_copy = new Endereco(ptr_endereco);
        listRetorno.insere(ptr_endereco_copy);
    }

    return listRetorno;
}


std::string Pessoa::toString()
{
    return Pessoa::nome;
}