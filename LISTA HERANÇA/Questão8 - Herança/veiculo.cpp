#include <iostream>
using namespace std;
#include "veiculo.h"

Veiculo::Veiculo(string cor, string modelo, string ano){
    this -> cor = cor;
    this -> modelo = modelo;
    this -> ano = ano;
}
Veiculo::Veiculo(){}

void Veiculo::setCor(string cor){
    this -> cor = cor;
}
void Veiculo::setModelo(string modelo){
    this -> modelo = modelo;
}
void Veiculo::setAno(string ano){
    this -> ano = ano;
}

string Veiculo::getCor(){
    return cor;
}
string Veiculo::getModelo(){
    return modelo;
}
string Veiculo::getAno(){
    return ano;
}