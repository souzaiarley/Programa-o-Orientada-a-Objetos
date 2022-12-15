#pragma once
#include <iostream>

using namespace std;

class Conta {
    private:
        double saldo;

    public:
        Conta(double);
        Conta();

        void setSaldo(double saldo);
        double getSaldo();

        void credito(double);
        void debito(double);       
};
