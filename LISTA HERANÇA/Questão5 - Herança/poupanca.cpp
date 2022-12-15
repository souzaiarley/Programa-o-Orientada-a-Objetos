#include <iostream>
#include "poupanca.h"

using namespace std;

Poupanca::Poupanca(double saldo, double rendimento): Conta(saldo){
    this -> rendimento = rendimento;
}
Poupanca::Poupanca(){}

void Poupanca::setRendimento(double rendimento){
    this -> rendimento = rendimento;
}

double Poupanca::getRendimento(){
    return rendimento;
}

double Poupanca::CalculaRendimento(){
    return getSaldo() * rendimento;
}