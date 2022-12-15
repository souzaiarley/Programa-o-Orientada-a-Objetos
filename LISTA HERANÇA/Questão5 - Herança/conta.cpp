#include <iostream>
#include "conta.h"

using namespace std;

Conta::Conta(double saldo){
    while (saldo < 0){
        cout << "Erro: Valor de saldo invalido\nInsira um saldo valido: R$";
        cin >> saldo;
    }
    
    this -> saldo = saldo;
}
Conta::Conta(){}

void Conta::credito(double credito){
    setSaldo(saldo+credito);
}

void Conta::debito(double debito){
    if (debito > saldo){
        cout << "Erro: Saldo insuficiente" << endl;
    }
    else{
        setSaldo(saldo-debito);
    }
}

void Conta::setSaldo(double saldo){
    this -> saldo = saldo;
}

double Conta::getSaldo(){
    return saldo;
}