#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno(string nome, string serie, string grau){
    this -> nome = nome;
    this -> serie = serie;
    this -> grau = grau;
    static int num_alunos = 0;
    num_alunos++;
    cout << "Numero de alunos: " << num_alunos << endl;
    cout << "======================" << endl;
}
Aluno::Aluno(){}

void Aluno::setNome(string nome){
    this -> nome = nome;
}
void Aluno::setSerie(string serie){
    this -> serie = serie;
}
void Aluno::setGrau(string grau){
    this -> grau = grau;
}

string Aluno::getNome(){
    return nome;
}
string Aluno::getSerie(){
    return serie;
}
string Aluno::getGrau(){
    return grau;
}