#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
  Empregado();
  ~Empregado();
  double PagamentoMes();
  void MostrarInfo();
  
	protected:
  std::string Nome;
  double SalarioHora;
  double TrabalhoHora;
	
};

#endif
