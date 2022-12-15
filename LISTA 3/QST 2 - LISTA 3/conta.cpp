#include <iostream>
#include "conta.h"

using namespace std;

Conta::Conta(double saldo){
    if (saldo < 0){
        cout << "ERRO: Saldo deve ser maior que zero" << endl;
        this -> saldo = 0;
    }
    else{
        this -> saldo = saldo;
    }
}
Conta::Conta(){}

void Conta::credito(double credito){
    this -> saldo = saldo + credito;
}

void Conta::debito(double debito){
    if (debito > saldo){
        cout << "ERRO: o debito nao deve ser maior que o saldo" << endl;
    }
    else{
        this -> saldo = saldo - debito;
    }
}

double Conta::getSaldo(){
    return saldo;
}