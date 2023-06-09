#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
#include <regex>

class Endereco
{
private:
	std::string rua;
	std::string bairo;
	int cep;
	int numero;
	std::string pais;
	std::string estado;
	std::string cidade;
	
public:
	Endereco();
	Endereco(Endereco* ptr_endereco);	
	~Endereco();
	
	std::string getRua();
	void setRua(std::string new_rua);
	
	std::string getBairo();
	void setBairo(std::string new_bairo);
	
	int getNumero();
	void setNumero(int new_numero);
	
	int getCep();
	void setCep(int new_cep);
	
	std::string getPais();
	void setPais(std::string new_pais);
	
	std::string getEstado();
	void setEstado(std::string new_estado);
	
	std::string getCidade();
	void setCidade(std::string new_cidade);
	
	std::string toString();
};

#endif // ENDERECO_H
