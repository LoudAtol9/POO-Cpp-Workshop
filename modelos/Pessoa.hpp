#ifndef PESSOA_H
#define PESSOA_H

#include "../modelos/Data.hpp"
#include "../modelos/Endereco.hpp"
#include "../utils/MyLinkedList.hpp"
#include <iostream>


class Pessoa
{
private:
    std::string nome;
    std::string cpf;
    Data dataNascimento;
    std::string telefone;
    MyLinkedList listaEndereco;
    
public:
    Pessoa();
    Pessoa(Pessoa* ptr_pessoa);
    Pessoa(std::string new_nome, std::string new_cpf, Data new_dataNascimento, std::string new_telefone);
    ~Pessoa();

    void setNome(std::string new_nome);
    std::string getNome();

    void setCpf(std::string new_cpf);
    std::string getCpf();

    void setDataNascimento(Data new_dataNascimento);
    void setDataNascimento(int new_dia, int new_mes, int new_ano);
    Data getDataNascimento();
    
    void setTelefone(std::string new_telefone);
    std::string getTelefone();

    void setEndereco(Endereco new_endereco);
    Endereco getEndereco(int index);

    MyLinkedList getListaEndereco();

    std::string toString();
};  


#endif // PESSOA_H

