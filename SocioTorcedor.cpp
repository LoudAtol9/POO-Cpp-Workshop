#include "SocioTorcedor.hpp"

SocioTorcedor::SocioTorcedor(){}


double SocioTorcedor::getValorExtra()
{
	return SocioTorcedor::ValorExtra;
}

void SocioTorcedor::setValorExtra(double new_ValorExtra)
{
	SocioTorcedor::ValorExtra = new_ValorExtra;
}

double SocioTorcedor::getValorInicial()
{
	return SocioTorcedor::ValorInicial;
}

void SocioTorcedor::setValorInicial(double new_ValorInicial)
{
	SocioTorcedor::ValorInicial = new_ValorInicial;
}

double SocioTorcedor::getValorFinal()
{
	return SocioTorcedor::ValorFinal;
}

void SocioTorcedor::setValorFinal(double new_ValorFinal)
{
	SocioTorcedor::ValorFinal = new_ValorFinal;
}

void SocioTorcedor::calculaValorFinal()
{
	SocioTorcedor::ValorFinal = SocioTorcedor::ValorInicial * SocioTorcedor::ValorExtra; 
}

	

