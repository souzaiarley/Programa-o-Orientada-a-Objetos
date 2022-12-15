#include <iostream>
using namespace std;
#include "terrestre.h"

VeiculoTerrestre::VeiculoTerrestre(string cor, string modelo, string ano, string potencia, string placa, string cambio):
    Veiculo(cor, modelo, ano){
    this -> potencia = potencia;
    this -> placa = placa;
    this -> cambio = cambio;
}

VeiculoTerrestre::VeiculoTerrestre(){}

void VeiculoTerrestre::setPotencia(string potencia){
    this -> potencia = potencia;
} 
void VeiculoTerrestre::setPlaca(string placa){
    this -> placa = placa;
}
void VeiculoTerrestre::setCambio(string cambio){
    this -> cambio = cambio;
}

string VeiculoTerrestre::getPotencia(){
    return potencia;
}
string VeiculoTerrestre::getPlaca(){
    return placa;
}
string VeiculoTerrestre::getCambio(){
    return cambio;
}