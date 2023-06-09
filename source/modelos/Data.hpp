#ifndef DATA_H
#define DATA_H

#include <iostream>

class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    Data();
    Data(Data* data);
    Data(int new_dia, int new_mes, int new_ano);
    ~Data();

    void setDia(int new_dia);
    int getDia();

    void setMes(int new_mes);
    int getMes();

    void setAno(int new_ano);
    int getAno();

    std::string toString();
};

#endif // DATA_H


