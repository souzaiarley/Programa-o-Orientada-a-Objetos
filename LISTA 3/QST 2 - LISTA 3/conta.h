#include <iostream>

class Conta{
    private:
        double saldo;

    public:
        Conta(double);
        Conta();

        void credito(double);
        void debito(double);
        
        double getSaldo();

};