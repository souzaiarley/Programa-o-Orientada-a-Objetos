#pragma once
#include <iostream>
#include "conta.h"

using namespace std;

class Poupanca: public Conta {
    private:
        double rendimento;

    public:
        Poupanca(double, double);
        Poupanca();

        void setRendimento(double rendimento);
        double getRendimento();

        double CalculaRendimento();
      
};