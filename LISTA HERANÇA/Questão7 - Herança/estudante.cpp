#include <iostream>
#include "estudante.h"

using namespace std;

Estudante::Estudante(string nome, string matricula, string curso){
    this -> nome = nome;
    this -> matricula = matricula;
    this -> curso = curso;
}
Estudante::Estudante(){}

void Estudante::setNome(string nome){
    this -> nome = nome;
}
void Estudante::setMatricula(string matricula){
    this -> matricula = matricula;
}
void Estudante::setCurso(string curso){
    this -> curso = curso;
}

string Estudante::getNome(){
    return nome;
}
string Estudante::getMatricula(){
    return matricula;
}
string Estudante::getCurso(){
    return curso;
}