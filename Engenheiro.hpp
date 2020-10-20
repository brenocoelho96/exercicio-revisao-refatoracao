#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>

#include "Empregado.hpp"
#include "Engenheiro.hpp"

class Engenheiro : public Empregado {
    
    public:
    std::string getNome()
    {return nome;}
    int getProjetos()
    {return projetos;}
    double getSalario()
    {return salario;}
    Engenheiro(std::string _Nome, double _SalarioHora, double _HorasTrabalhadas, int _Projetos);
    void getEngenheiro()
    ~Engenheiro();

    protected:
    int projetos;


};

#endif
