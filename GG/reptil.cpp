#include "reptil.h"
#include <iostream>

using namespace std;

void Reptil::setCorEscama(string corEscama){
    this -> corEscama = corEscama;
}

string Reptil::getCorEscama(){
    return corEscama;
}

void Reptil::locomover(){
    cout << "reptil rasteja" << endl;
}
void Reptil::alimentar(){
    cout << "reptil come vegetal" << endl;
}
void Reptil::emitirsom(){
    cout << "som de reptil" << endl;
}