#include <iostream>
using namespace std;

#include "aquatico.h"

VeiculoAquatico::VeiculoAquatico(string cor, string modelo, string ano, string comprimento, string altura, string velocidade):
    Veiculo(cor, modelo, ano){
    this -> comprimento = comprimento;
    this -> altura = altura;
    this -> velocidade = velocidade;
}

VeiculoAquatico::VeiculoAquatico(){}

void VeiculoAquatico::setComprimento(string comprimento){
    this -> comprimento = comprimento;
}
void VeiculoAquatico::setAltura(string altura){
    this -> altura = altura;
}
void VeiculoAquatico::setVelocidade(string velocidade){
    this -> velocidade = velocidade;
}

string VeiculoAquatico::getComprimento(){
    return comprimento;
}
string VeiculoAquatico::getAltura(){
    return altura;
}
string VeiculoAquatico::getVelocidade(){
    return velocidade;
}
