#include "Data.hpp"

Data::Data(){}

Data::Data(Data* ptr_data)
{
    Data::dia = ptr_data->getDia();
    Data::mes = ptr_data->getMes();
    Data::ano = ptr_data->getAno();
}

Data::Data(int new_dia, int new_mes, int new_ano)
{
    Data::setDia(new_dia);
    Data::setMes(new_mes);
    Data::setAno(new_ano);
}

Data::~Data(){}


int Data::getAno()
{
    return Data::ano;
}

void Data::setAno(int new_ano)
{
        try
    {
        Data::ano = new_ano;
    }
    catch(...)
    {
        std::cout << "\nErro: (in Data.cpp in Data::setAno) valor invalido de entrada\n" << std::endl; 
    }
}


int Data::getMes()
{
    return Data::mes;
}

void Data::setMes(int new_mes)
{
    try
    {
        if (!(new_mes >= 1 && new_mes <= 12))
            throw new_mes;
        Data::mes = new_mes;
    }
    catch(...)
    {
        std::cout << "\nErro: (in Data.cpp in Data::setMes) valor invalido de entrada\n" << std::endl; 
    }
}


int Data::getDia()
{
    return Data::dia;
}

void Data::setDia(int new_dia)
{
    try
    {
        if (!(new_dia >= 1 && new_dia <= 31))
            throw new_dia;
        Data::dia = new_dia;
    }
    catch(...)
    {
        std::cout << "\nErro: (in Data.cpp in Data::setDia) valor invalido de entrada\n" << std::endl; 
    }
}


std::string Data::toString()
{
    std::string str_dia = (Data::dia < 10) ? '0' + std::to_string(Data::dia) : std::to_string(Data::dia);
    std::string str_mes = (Data::mes < 10) ? '0' + std::to_string(Data::mes) : std::to_string(Data::mes);

    return str_dia + "/" + str_mes + "/" + std::to_string(Data::ano);
}
