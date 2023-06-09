#ifndef SOCIO_TORCEDOR_H
#define SOCIO_TORCEDOR_H

#include <iostream>
#include "../modelos/Pessoa.hpp"

class SocioTorcedor : public Pessoa
{
protected:
    double valorExtra;
    double valorInicial;
    double valorFinal;

    Data dataIngresso;

    int limiteIndicacao;
    MyLinkedList pessoasIndicadas;
    
public:
    SocioTorcedor();
    SocioTorcedor(std::string nome, std::string cpf);
    SocioTorcedor(Pessoa* p);

    ~SocioTorcedor();
    
    double getValorExtra();
    void setValorExtra(double new_ValorExtra);
    
    double getValorInicial();
    void setValorInicial(double new_ValorInicial);
    
    double getValorFinal();

    Data getDataIngresso();
    void setDataIngresso(Data data);

    Pessoa getPessoaIndicada(int index);
    void setPessoaIndicada(Pessoa Indicada);

    MyLinkedList getListaIndicados();

    void calculaValorFinal();

    std::string toString();

};




#endif // SOCIO_TORCEDOR_H
