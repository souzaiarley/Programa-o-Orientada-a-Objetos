#include <iostream>
#include "estacionamento.h"

using namespace std;

Estacionamento::Estacionamento(){}

void Estacionamento::setPlaca(string placa){
    this -> placa = placa;
}
void Estacionamento::setModelo(string modelo){
    this -> modelo = modelo;
}
void Estacionamento::setHoraEntrada(int horaEntrada){
    this -> horaEntrada = horaEntrada;
}
void Estacionamento::setMinutoEntrada(int minutoEntrada){
    this -> minutoEntrada = minutoEntrada;
}
void Estacionamento::setSegundoEntrada(int segundoEntrada){
    this -> segundoEntrada = segundoEntrada;
}
void Estacionamento::setHoraSaida(int horaSaida){
    this -> horaSaida = horaSaida;
}
void Estacionamento::setMinutoSaida(int minutoSaida){
    this -> minutoSaida = minutoSaida;
}
void Estacionamento::setSegundoSaida(int segundoSaida){
    this -> segundoSaida = segundoSaida;
}

string Estacionamento::getPlaca(){return placa;}
string Estacionamento::getModelo(){return modelo;}
int Estacionamento::getHoraEntrada(){return horaEntrada;}
int Estacionamento::getMinutoEntrada(){return minutoEntrada;}
int Estacionamento::getSegundoEntrada(){return segundoEntrada;}
int Estacionamento::getHoraSaida(){return horaSaida;}
int Estacionamento::getMinutoSaida(){return minutoSaida;}
int Estacionamento::getSegundoSaida(){return segundoSaida;}

void Estacionamento::printCarro(){
    cout << "Placa: " << getPlaca() << endl;
    cout << "Modelo: " << getModelo() << endl;
}

float Estacionamento::Custo(int hora){
    return hora*1.5;
}