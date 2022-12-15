#include <iostream>
#include "contacorrente.h"

using namespace std;

ContaCorrente::ContaCorrente(double saldo, double cobranca): Conta(saldo){
    this -> cobranca = cobranca;
}
ContaCorrente::ContaCorrente(){}

void ContaCorrente::setCobranca(double cobranca){
    this -> cobranca = cobranca;
}

double ContaCorrente::getCobranca(){
    return cobranca;
}

void ContaCorrente::credito(double credito){
    Conta::credito(credito-cobranca);
}

void ContaCorrente::debito(double debito){
    Conta::debito(debito+cobranca);
}