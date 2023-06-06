#ifndef SOCIO_TORCEDOR_H
#define SOCIO_TORCEDOR_H

#include <iostream>
#include "Pessoa.hpp"

class SocioTorcedor
{
private:
    double valorExtra;
    double valorInicial;
    double valorFinal;
public:
    SocioTorcedor();
    ~SocioTorcedor();
    
    double getValorExtra();
    void setValorExtra(double newValorExtra);
    
    double getValorInicial();
    void setValorInicial(double newValorInicial);
    
    double getValorFinal();
    void setValorFinal(double newValorFinal);
    
    void calculaValorFinal();
};




#endif // SOCIO)_TORCEDOR_H
