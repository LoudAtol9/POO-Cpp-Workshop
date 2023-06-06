#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>

class Endereco
{
private:
	std::string rua;
	std::string bairo;
	int cep;
	std::string pais;
	std::string estado;
	std::string cidade;
	
public:
	Endereco();
	~Endereco();
	
	std::string getRua();
	void setRua(std::string new_rua);
	
	std::string getBairo();
	void setBairo(std::string new_Bairo);
	
	int getCep();
	void setCep(int new_cep);
	
	std::string getPais();
	void setPais(std::string new_pais);
	
	std::string getEstado();
	void setEstado(std::string new_estado);
	
	std::string getRua();
	void setRua(std::string new_rua);
	
	std::string toString();
}

#endif // ENDERECO_H
