#include <iostream>
#include <iomanip>
#include <string>
#include "restaurante.h"

using namespace std;

Restaurante::Restaurante(string nome, string endereco, string cidade,
string estado, int cep, int fone, string tipo, float preco)
:Empresa(nome, endereco, cidade, estado, cep, fone){
 this -> tipo = tipo;
 this -> preco = preco;   
}
Restaurante::Restaurante(){}

void Restaurante::setTipo(string tipo){
    this -> tipo = tipo;
}
void Restaurante::setPreco(float preco){
    this -> preco = preco;
}

string Restaurante::getTipo(){
    return tipo;
}
float Restaurante::getPreco(){
    return preco;
}

void Restaurante::printRestaurante(){
    cout << "===================" << endl;
    printEmpresa();
    cout << "Tipo: " << getTipo() << endl;
    cout << fixed << setprecision(2) << "Preco Medio: R$" << getPreco() << endl;
    cout << "===================" << endl;
}