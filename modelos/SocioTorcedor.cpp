#include "SocioTorcedor.hpp"

SocioTorcedor::SocioTorcedor(){}

SocioTorcedor::SocioTorcedor(std::string nome, std::string cpf)
{
	SocioTorcedor::setNome(nome);
	SocioTorcedor::setCpf(cpf);
}

SocioTorcedor::~SocioTorcedor()
{
	SocioTorcedor::~Pessoa();
}

double SocioTorcedor::getValorExtra()
{
	return SocioTorcedor::valorExtra;
}

void SocioTorcedor::setValorExtra(double new_valorExtra)
{
	SocioTorcedor::valorExtra = new_valorExtra;
	SocioTorcedor::calculaValorFinal();
}

double SocioTorcedor::getValorInicial()
{
	return SocioTorcedor::valorInicial;
}

void SocioTorcedor::setValorInicial(double new_valorInicial)
{
	SocioTorcedor::valorInicial = new_valorInicial;
	SocioTorcedor::calculaValorFinal();
}

double SocioTorcedor::getValorFinal()
{
	return SocioTorcedor::valorFinal;
}

Pessoa SocioTorcedor::getPessoaIndicada(int index)
{
	if (index < 0 || index > SocioTorcedor::pessoasIndicadas.getlength())
	{
		Pessoa elem_error;
		std::cout << "Error: (SocioTorcedor::getPessoaIndicada) index out of range" << std::endl;
		return elem_error;
	}
	else
	{
		Pessoa* ptr = (Pessoa*) SocioTorcedor::pessoasIndicadas.busca(index);
		Pessoa elem(ptr);
		free(ptr);
		return elem;
	}
}

void SocioTorcedor::setPessoaIndicada(Pessoa Indicada)
{
	if (SocioTorcedor::pessoasIndicadas.getlength() == SocioTorcedor::limiteIndicacao)
		return;
	
	Pessoa* new_ptr = new Pessoa(&Indicada);
    SocioTorcedor::pessoasIndicadas.insere(new_ptr);
	delete new_ptr;
}

void SocioTorcedor::calculaValorFinal()
{
	SocioTorcedor::valorFinal = SocioTorcedor::valorInicial * SocioTorcedor::valorExtra; 
}


std::string SocioTorcedor::toString()
{
	return "Nome: " + SocioTorcedor::nome + " CPF: " + SocioTorcedor::cpf + 
		" Custo mensal: " + std::to_string(SocioTorcedor::valorFinal);
}
	

