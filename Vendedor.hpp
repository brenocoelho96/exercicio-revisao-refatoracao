#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>

#include "Empregado.hpp"

class Vendedor : public Empregado {
    public:

    int getQuotaMensal()
    {return quotaMensal;}
    double GetQuotaTotalAnual();
    Vendedor(std::string Nome, double SalarioHora, double HorasTrabalhas, int QuoteMensal);
    ~Vendedor();

    private:
    double quotaMensal;


};

#endif
