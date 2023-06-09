#ifndef SOCIO_TORCEDOR_H
#define SOCIO_TORCEDOR_H

#include <iostream>
#include "Pessoa.hpp"

class SocioTorcedor : public Pessoa
{
protected:
    double valorExtra;
    double valorInicial;
    double valorFinal;

    int limiteIndicacao;
    MyLinkedList pessoasIndicadas;
    
public:
    SocioTorcedor();
    SocioTorcedor(std::string nome, std::string cpf);

    ~SocioTorcedor();
    
    double getValorExtra();
    void setValorExtra(double new_ValorExtra);
    
    double getValorInicial();
    void setValorInicial(double new_ValorInicial);
    
    double getValorFinal();

    Pessoa getPessoaIndicada(int index);
    void setPessoaIndicada(Pessoa Indicada);

    void calculaValorFinal();

    std::string toString();


};




#endif // SOCIO_TORCEDOR_H
