#include "Data.hpp"


Data::Data()
{

}

Data::Data(int new_dia, int new_mes, int new_ano)
{
    Data::dia = new_dia;
    Data::mes = new_mes;
    Data::ano = new_ano;
}

int Data::getAno()
{
    return Data::ano;
}

void Data::setAno(int new_ano)
{
    Data::ano = new_ano;
}

int Data::getMes()
{
    return Data::mes;
}

void Data::setMes(int new_mes)
{
    Data::mes = new_mes;
}

int Data::getDia()
{
    return Data::dia;
}

void Data::setAno(int new_dia)
{
    Data::dia = new_dia;
}

std::string Data::toString()
{
    return std::to_string(Data::dia) + "/" 
           + std::to_string(Data::mes) + "/" 
           + std::to_string(Data::ano);
}
