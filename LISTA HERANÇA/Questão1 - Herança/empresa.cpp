#include <iostream>
#include <string>
#include "empresa.h"

using namespace std;

Empresa::Empresa(string nome, string endereco, string cidade, string estado, int cep, int fone){
    this -> nome = nome;
    this -> endereco = endereco;
    this -> cidade = cidade;
    this -> estado = estado;
    this -> cep = cep;
    this -> fone = fone;
}
Empresa::Empresa(){}

void Empresa::setNome(string nome){
    this -> nome = nome;
}
void Empresa::setEndereco(string endereco){
    this -> endereco = endereco;
}
void Empresa::setCidade(string cidade){
    this -> cidade = cidade;
}
void Empresa::setEstado(string estado){
    this -> estado = estado;
}
void Empresa::setCep(int cep){
    this -> cep = cep;
}
void Empresa::setFone(int fone){
    this -> fone = fone;
}

string Empresa::getNome(){
    return nome;
}
string Empresa::getEndereco(){
    return endereco;
}
string Empresa::getCidade(){
    return cidade;
}
string Empresa::getEstado(){
    return estado;
}
int Empresa::getCep(){
    return cep;
}
int Empresa::getFone(){
    return fone;
}

void Empresa::printEmpresa(){
    cout << "Nome: " << getNome() << endl;
    cout << "Endereco: " << getEndereco() << endl;
    cout << "Cidade: " << getCidade() << endl;
    cout << "Estado: " << getEstado() << endl;
    cout << "Cep: " << getCep() << endl;
    cout << "Fone: " << getFone() << endl;
}