#ifndef SOCIO_TORCEDOR_H
#define SOCIO_TORCEDOR_H

#include <iostream>
#include "Pessoa.hpp"

class SocioTorcedor : public Pessoa
{
private:
    double valorExtra;
    double valorInicial;
    double valorFinal;
    
public:
    SocioTorcedor();
    ~SocioTorcedor();
    
    double getValorExtra();
    void setValorExtra(double new_ValorExtra);
    
    double getValorInicial();
    void setValorInicial(double new_ValorInicial);
    
    double getValorFinal();
    void setValorFinal(double new_ValorFinal);
    
    void calculaValorFinal();
};




#endif // SOCIO_TORCEDOR_H
