#include "Empregado.hpp"

    Empregado::Empregado(std::string _Nome, double _SalarioHora, double _TrabalhoHora) {
       this->Nome = _Nome;
       this->SalarioHora = _SalarioHora;
       this->TrabalhoHora = _TrabalhoHora; 
    }


    double Empregado::GetPagamentoPorMes(){
        double TotalHoras = this->TrabalhoHora;

        if (this->TrabalhoHora > 8) {
        double aux = this->TrabalhoHora - 8;
        TotalHoras += aux / 2;
        }
        return  TotalHoras * this->SalarioHora;
    }
