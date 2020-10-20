#include <string>
#include "Vendedor.hpp"

class Vendedor : public Empregado {

   Vendedor::Vendedor (std::string _Nome, double _SalarioHora, double _HorasTrabalhadas, int _QuotaMensal){
     this->Nome = Nome;
     this->SalarioHora = _SalarioHora;
     this->HorasTrabalhadas = _HorasTrabalhadas;
     this->QuotaMensal = _QuotaMensal;
   }

   	double Vendedor::GetQuotaTotalAnual(){
     double ValorFinal = this->QuotaMensal * 12 ;
     return ValorFinal;
 	}

 	void Vendedor::GetVendedor ()  {
        std::cout << "Nome: " << this->Nome << std::endl;
        std::cout << "Salario Mes: " << this->GetPagamentoPorMes() << std::endl;
        std::cout << "Quota vendas: " << this->GetQuotaTotalAnual() << std::endl;
 	}
	
};



