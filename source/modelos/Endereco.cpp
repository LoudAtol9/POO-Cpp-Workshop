#include "Endereco.hpp"

Endereco::Endereco(){}

Endereco::Endereco(Endereco* ptr_endereco)
{
	Endereco::rua = ptr_endereco->getRua();
	Endereco::bairo = ptr_endereco->getBairo();
	Endereco::cep = ptr_endereco->getCep();
	Endereco::numero = ptr_endereco->getNumero();
	Endereco::pais = ptr_endereco->getPais();
	Endereco::estado = ptr_endereco->getEstado();
	Endereco::cidade = ptr_endereco->getCidade();
}

Endereco::~Endereco(){}

std::string Endereco::getRua()
{
	return Endereco::rua;
}
void Endereco::setRua(std::string new_rua)
{
	std::regex str_regex("[a-zA-Z][a-zA-Z]* ?");
	if (std::regex_match(new_rua, str_regex))
		Endereco::rua = new_rua;
}
	
std::string Endereco::getBairo()
{
	return Endereco::bairo;
}
void Endereco::setBairo(std::string new_bairo)
{
	std::regex str_regex("[a-zA-Z][a-zA-Z]* ?");
	if (std::regex_match(new_bairo, str_regex))
		Endereco::bairo = new_bairo;
}
	
int Endereco::getCep()
{
	return Endereco::cep;
}
void Endereco::setCep(int new_cep)
{
	std::regex str_regex("[0-9]{5}[-]?[0-9]{3}");
	if (std::regex_match(std::to_string(new_cep), str_regex))	
		Endereco::cep = new_cep;
}
	
int Endereco::getNumero()
{
	return Endereco::numero;
}
void Endereco::setNumero(int new_numero)
{
	std::regex str_regex("^(?[1-9]{2})? ?[0-9]{5}[- ]?[0-9]{4}$");
	if (std::regex_match(std::to_string(new_numero), str_regex))
		Endereco::numero = new_numero;
}
	
std::string Endereco::getPais()
{
	return Endereco::pais;
}
void Endereco::setPais(std::string new_pais)
{
	std::regex str_regex("[a-zA-Z][a-zA-Z]* ?");
	if (std::regex_match(new_pais, str_regex))
		Endereco::pais = new_pais;
}
	
std::string Endereco::getEstado()
{
	return Endereco::estado;
}
void Endereco::setEstado(std::string new_estado)
{
	std::regex str_regex("[a-zA-Z][a-zA-Z]* ?");
	if (std::regex_match(new_estado, str_regex))
		Endereco::estado = new_estado;
}
	
std::string Endereco::getCidade()
{
	return Endereco::cidade;
}
void Endereco::setCidade(std::string new_cidade)
{
	std::regex str_regex("[a-zA-Z][a-zA-Z]* ?");
	if (std::regex_match(new_cidade, str_regex))
		Endereco::cidade = new_cidade;
}
	
std::string Endereco::toString()
{
	return "Pais: " + Endereco::pais + "\nEstado: " + Endereco::estado
		   + "\nCidade: " + Endereco::cidade + "\nBairo: " +  Endereco::bairo
		   + "\nRua: " + Endereco::rua + "\nNumero: " + std::to_string(Endereco::numero);
}
