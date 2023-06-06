#include "Endereco.hpp"

Endereco::Endereco(){}

std::string Endereco::getRua()
{
	return Endereco::rua;
}
void Endereco::setRua(std::string new_rua)
{
	Endereco::rua = new_rua;
}
	
std::string Endereco::getBairo()
{
	return Endereco::bairo;
}
void Endereco::setBairo(std::string new_bairo)
{
	Endereco::bairo = new_bairo;
}
	
int Endereco::getCep()
{
	return Endereco::cep;
}
void Endereco::setCep(int new_cep);
{
	Endereco::cep = new_cep;
}
	
int Endereco::getNumero()
{
	return Endereco::numero;
}
void Endereco::setNumero(int new_numero);
{
	Endereco::numero = new_numero;
}
	
std::string Endereco::getPais()
{
	return Endereco::pais;
}
void Endereco::setPais(std::string new_pais)
{
	Endereco::pais = pais;
}
	
std::string Endereco::getEstado()
{
	return Endereco::estado;
}
void Endereco::setEstado(std::string new_estado)
{
	Endereco::estado = new_estado;
}
	
std::string Endereco::getCidade()
{
	return Endereco::cidade
}
void Endereco::setCidade(std::string new_cidade);
{
	Endereco::cidade = new_cidade;
}
	
std::string Endereco::toString()
{
	return "Pais: " + Endereco::pais + "\nEstado: " + Endereco::estado
		   + "\nCidade: " + Endereco::cidade + "\nBairo: " +  Endereco::bairo
		   + "\nRua: " + Endereco::rua + "\nNumero: " + Endereco::numero;
}
