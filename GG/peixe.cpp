#include <iostream>
#include "peixe.h"
using namespace std;

void Peixe::setCorEscama(string corEscama){
    this -> corEscama = corEscama;
}

string Peixe::getCorEscama(){
    return corEscama;
}

void Peixe::soltarBolha(){
    cout << "soltou uma bolha" << endl;
}

void Peixe::locomover(){
    cout << "peixe nada" << endl;
}
void Peixe::alimentar(){
    cout << "peixe come substancias" << endl;
}
void Peixe::emitirsom(){
    cout << "n emite som" << endl;
}