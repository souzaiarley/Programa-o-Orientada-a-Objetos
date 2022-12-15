#include "mamifero.h"
#include <iostream>

using namespace std;

void Mamifero::setCorPelo(string corPelo){
    this -> corPelo = corPelo;
} 
string Mamifero::getCorPelo(){
    return corPelo;
}

void Mamifero::locomover(){
    cout << "mamifero corre" << endl;
}
void Mamifero::alimentar(){
    cout << "mamifero mama" << endl;
}
void Mamifero::emitirsom(){
    cout << "som de mamifero" << endl;
}