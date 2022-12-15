#include <iostream>
#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(string _nome, float salario, string turno){
    this -> _nome = _nome;
    this -> salario = salario;
    this -> turno = turno;
}
Funcionario::Funcionario(){}

void Funcionario::set_Nome(string _nome){
    this -> _nome = _nome;
}
void Funcionario::setSalario(float salario){
    this -> salario = salario;
}
void Funcionario::setTurno(string turno){
    this -> turno = turno;
}

string Funcionario::get_Nome(){
    return _nome;
}
float Funcionario::getSalario(){
    return salario;
}
string Funcionario::getTurno(){
    return turno;
}