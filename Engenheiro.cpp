#include <string>
#include "Engenheiro.hpp"

class Engenheiro : public Empregado {

  Engenheiro::Engenheiro (std::string _Nome, double _HoraSalario, double _Salario, int _Projetos) {
    this->Nome = _Nome;
    this->HoraSalario = _HoraSalario;
    this->Salario = _Salario;
    this->Projetos = _Projetos;
  }

  void Engenheiro::GetEngenheiro() {
    std::cout <<"Nome - " <<  this->Nome << std::endl;
    std::cout <<"Salario por Mês - " <<  this->PagamentoMes() << std::endl;
    std::cout <<"Projetos - " <<  this->Nome << std::endl;
  }
};

