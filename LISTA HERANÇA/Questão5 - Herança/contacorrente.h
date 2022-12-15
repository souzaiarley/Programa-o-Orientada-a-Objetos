#pragma once
#include <iostream>
#include "conta.h"

using namespace std;

class ContaCorrente: public Conta {
    private:
        double cobranca;

    public:
        ContaCorrente(double, double);
        ContaCorrente();

        void setCobranca(double cobranca);
        double getCobranca();

        void credito(double);
        void debito(double);

};