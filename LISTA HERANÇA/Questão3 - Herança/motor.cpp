#include <iostream>
#include <string>
#include "motor.h"

using namespace std;

Motor::Motor(int cilindros, int potencia){
    this -> cilindros = cilindros;
    this -> potencia = potencia;
}
Motor::Motor(){}

void Motor::setCilindros(int cilindros){
    this -> cilindros = cilindros;
}
void Motor::setPotencia(int potencia){
    this -> potencia = potencia;
}

int Motor::getCilindros(){
    return cilindros;
}
int Motor::getPotencia(){
    return potencia;
}

void Motor::printMotor(){
    cout << "Cilindros: " << getCilindros() << endl;
    cout << "Potencia: " << getPotencia() << endl;
}