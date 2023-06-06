#ifndef PESSOA_H
#define PESSOA_H

#include "Data.hpp"
#include <iostream>


class Pessoa
{
private:
    std::string nome;
    std::string cpf;
    Data dataNascimento;
    
public:
    Pessoa();

    Pessoa(std::string new_nome, std::string new_cpf, Data new_dataNascimento);

    void setNome(std::string new_nome);

    std::string getNome();

    void setCpf(std::string new_cpf);

    std::string getCpf();

    void setDataNascimento(Data new_dataNascimento);

    Data getDataNascimento();
    
    std::string toString();
};  


#endif // PESSOA_H

