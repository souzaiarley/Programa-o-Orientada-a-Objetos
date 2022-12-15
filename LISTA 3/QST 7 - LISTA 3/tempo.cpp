#include <iostream>
#include <ctime>
#include "tempo.h"

using namespace std;

Tempo::Tempo(int hora, int minuto, int segundo){
    this -> hora = hora;
    this -> minuto = minuto;
    this -> segundo = segundo;
}
Tempo::Tempo(){
    this -> hora = 0;
    this -> minuto = 0;
    this -> segundo = 0;
}

void Tempo::setHora(int hora){
    this -> hora = hora;
}
void Tempo::setMinuto(int minuto){
    this -> minuto = minuto;
}
void Tempo::setSegundo(int segundo){
    this -> segundo = segundo;
}

int Tempo::getHora(){
    return hora;
}
int Tempo::getMinuto(){
    return minuto;
}
int Tempo::getSegundo(){
    return segundo;
}

void Tempo::print(){
    if(hora < 10){cout << "0";}
    cout << getHora() << ":";
    if (minuto < 10){cout << "0";}
    cout << getMinuto() << ":";
    if (segundo < 10){cout << "0";}
    cout << getSegundo() << endl;
}

void Tempo::subtrair(Tempo &tempo){
    setHora(this -> hora-tempo.hora);
    setMinuto(this -> minuto-tempo.minuto);
    setSegundo(this -> segundo-tempo.segundo);
}

void Tempo::soma(Tempo &tempo){
    setHora(this -> hora+tempo.hora);
    setMinuto(this -> minuto+tempo.minuto);
    setSegundo(this -> segundo+tempo.segundo);
}

Tempo Tempo::soma(Tempo *tempo){
    Tempo *saida = new Tempo();

    saida->setHora(this -> hora+tempo->hora);
    saida->setMinuto(this -> minuto+tempo->minuto);
    saida->setSegundo(this -> segundo+tempo->segundo);
    
    return *saida;
}