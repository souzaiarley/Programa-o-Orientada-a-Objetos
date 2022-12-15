#include <iostream>
using namespace std;
#include "anfibio.h"


VeiculoAnfibio::VeiculoAnfibio(string cor, string modelo, string ano,
string potencia, string placa, string cambio,
string comprimento, string altura, string velocidade,
string peso, string passageiros, string marca):
Veiculo(cor, modelo, ano){
    setPotencia(potencia);
    setPlaca(placa);
    setCambio(cambio);

    setComprimento(comprimento);
    setAltura(altura);
    setVelocidade(velocidade);

    this -> peso = peso;
    this -> passageiros = passageiros;
    this -> marca = marca;
}

VeiculoAnfibio::VeiculoAnfibio(){}

void VeiculoAnfibio::setPeso(string peso){
    this -> peso = peso;
}
void VeiculoAnfibio::setPassageiros(string passageiros){
    this -> passageiros = passageiros;
}
void VeiculoAnfibio::setMarca(string marca){
    this -> marca = marca;
}

string VeiculoAnfibio::getPeso(){
    return peso;
}
string VeiculoAnfibio::getPassageiros(){
    return passageiros;
}
string VeiculoAnfibio::getMarca(){
    return marca;
}

void VeiculoAnfibio::print(){
    cout << "Cor: " << getCor() << endl;
    cout << "Modelo: " << getModelo() << endl;
    cout << "Ano: " << getAno() << endl;
    cout << "Potencia: " << getPotencia() << endl;
    cout << "Placa: " << getPlaca() << endl;
    cout << "Cambio: " << getCambio() << endl;
    cout << "Comprimento: " << getComprimento() << endl;
    cout << "Altura: " << getAltura() << endl;
    cout << "Velocidade: " << getVelocidade() << endl;
    cout << "Peso: " << getPeso() << endl;
    cout << "Passageiros: " << getPassageiros() << endl;
    cout << "Marca: " << getMarca() << endl;
}