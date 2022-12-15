#include "animal.h"
#include <iostream>
using namespace std;

void Animal::setPeso(string peso){
    this -> peso = peso;
}
void Animal::setIdade(string idade){
    this -> idade = idade;
}
void Animal::setMembros(string membros){
    this -> membros = membros;
}

string Animal::getPeso(){return peso;}
string Animal::getIdade(){return idade;}
string Animal::getMembros(){return membros;}