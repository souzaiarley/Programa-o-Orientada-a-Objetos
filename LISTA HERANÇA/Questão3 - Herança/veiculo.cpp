#include <iostream>
#include <string>
#include <iomanip>
#include "veiculo.h"

using namespace std;

Veiculo::Veiculo(double peso, double velmax, double preco){
    this -> peso = peso;
    this -> velmax = velmax;
    this -> preco = preco;
}
Veiculo::Veiculo(){}

void Veiculo::setPeso(double peso){
    this -> peso = peso;
}
void Veiculo::setVelmax(double velmax){
    this -> velmax = velmax;
}
void Veiculo::setPreco(double preco){
    this -> preco = preco;
}

double Veiculo::getPeso(){
    return peso;
}
double Veiculo::getVelmax(){
    return velmax;
}
double Veiculo::getPreco(){
    return preco;
}

void Veiculo::printVeiculo(){
    cout << "Peso: " << fixed << setprecision(0) << getPeso() << " Kg" << endl;
    cout << "Vel Max: " << fixed << setprecision(0) << getVelmax() << " Km/h" << endl;
    cout << "Preco: R$" << fixed << setprecision(2) << getPreco() << endl;
}