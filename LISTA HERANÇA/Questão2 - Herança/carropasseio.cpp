#include <iostream>
#include <string>
#include <iomanip>
#include "carropasseio.h"

using namespace std;

CarroPasseio::CarroPasseio(double peso, double velmax, double preco, 
int cilindros, int potencia, string modelo, string cor):Veiculo(peso, velmax, preco), Motor(cilindros, potencia){
    this -> modelo = modelo;
    this -> cor = cor;
}
CarroPasseio::CarroPasseio(){}

void CarroPasseio::setModelo(string modelo){
    this -> modelo = modelo;
}
void CarroPasseio::setCor(string cor){
    this -> cor = cor;
}

string CarroPasseio::getModelo(){
    return modelo;
}
string CarroPasseio::getCor(){
    return cor;
}

void CarroPasseio::printCarroPasseio(){
    cout << "==================" << endl;
    printVeiculo();
    printMotor();
    cout << "Modelo: " << getModelo() << endl;
    cout << "Cor: " << getCor() << endl;    
    cout << "==================" << endl;

}