#include <iostream>
#include "ave.h"
using namespace std;

void Ave::setCorPena(string corPena){
    this -> corPena = corPena;
}
string Ave::getCorPena(){
    return corPena;
}

void Ave::fazerNinho(){
    cout << "fez um ninho" << endl;
}

void Ave::locomover(){
    cout << "ave voa" << endl;
}
void Ave::alimentar(){
    cout << "ave come fruta" << endl;
}
void Ave::emitirsom(){
    cout << "som de ave" << endl;
}