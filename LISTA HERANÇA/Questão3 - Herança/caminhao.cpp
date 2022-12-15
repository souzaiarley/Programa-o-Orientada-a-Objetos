#include <iostream>
#include <iomanip>
#include "caminhao.h"

using namespace std;

Caminhao::Caminhao(double peso, double velmax, double preco, int cilindros, 
int potencia, float tonelada, float altmax, float comp):Veiculo(peso, velmax, preco), Motor(cilindros, potencia){
    this -> tonelada = tonelada;
    this -> altmax = altmax;
    this -> comp = comp;
}

Caminhao::Caminhao(){}

void Caminhao::setTonelada(float tonelada){
    this -> tonelada = tonelada;
}
void Caminhao::setAltmax(float altmax){
    this -> altmax = altmax;
}
void Caminhao::setComp(float comp){
    this -> comp = comp;
}

float Caminhao::getTonelada(){
    return tonelada;
}
float Caminhao::getAltmax(){
    return altmax;
}
float Caminhao::getComp(){
    return comp;
}

void Caminhao::printCaminhao(){
    cout << "====================" << endl;
    printVeiculo();
    printMotor();
    cout << "Toneladas: " << fixed << setprecision(1) << getTonelada() << endl;
    cout << "Alt max: " << fixed << setprecision(1) << getAltmax() << " m" << endl;
    cout << "Comprimento: " << fixed << setprecision(1) << getComp() << " m" << endl;
    cout << "====================" << endl;
}