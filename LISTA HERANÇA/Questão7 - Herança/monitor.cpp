#include <iostream>
#include <iomanip>
#include "monitor.h"

using namespace std;

Monitor::Monitor(string nome, string matricula, string curso,
string _nome, float salario, string turno,
string disciplina, string cargahoraria): Estudante(nome, matricula, curso),
Funcionario(_nome, salario, turno){
    this -> disciplina = disciplina;
    this -> cargahoraria = cargahoraria;
}
Monitor::Monitor(){}

void Monitor::setDisciplina(string disciplina){
    this -> disciplina = disciplina;
}
void Monitor::setCargahoraria(string cargahoraria){
    this -> cargahoraria = cargahoraria;
}

string Monitor::getDisciplina(){
    return disciplina;
}
string Monitor::getCargahoraria(){
    return cargahoraria;
}

void Monitor::printMonitor(){
    cout << "=======================" << endl;
    cout << "Nome(Aluno): " << getNome() << endl;
    cout << "Matricula: " << getMatricula() << endl;
    cout << "Curso: " << getCurso() << endl;
    cout << "Nome(Monitor): " << get_Nome() << endl;
    cout << "Salario: R$" << fixed << setprecision(2) << getSalario() << endl;
    cout << "Turno: " << getTurno() << endl;
    cout << "Disciplina: " << getDisciplina() << endl;
    cout << "Carga horaria: " << getCargahoraria() << endl;
    cout << "=======================" << endl;
}