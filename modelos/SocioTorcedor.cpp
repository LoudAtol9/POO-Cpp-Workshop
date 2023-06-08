#include "SocioTorcedor.hpp"

SocioTorcedor::SocioTorcedor(){}
SocioTorcedor::~SocioTorcedor(){}

double SocioTorcedor::getValorExtra()
{
	return SocioTorcedor::valorExtra;
}

void SocioTorcedor::setValorExtra(double new_valorExtra)
{
	SocioTorcedor::valorExtra = new_valorExtra;
}

double SocioTorcedor::getValorInicial()
{
	return SocioTorcedor::valorInicial;
}

void SocioTorcedor::setValorInicial(double new_valorInicial)
{
	SocioTorcedor::valorInicial = new_valorInicial;
}

double SocioTorcedor::getValorFinal()
{
	return SocioTorcedor::valorFinal;
}

void SocioTorcedor::setValorFinal(double new_valorFinal)
{
	SocioTorcedor::valorFinal = new_valorFinal;
}

void SocioTorcedor::calculaValorFinal()
{
	SocioTorcedor::valorFinal = SocioTorcedor::valorInicial * SocioTorcedor::valorExtra; 
}

	

