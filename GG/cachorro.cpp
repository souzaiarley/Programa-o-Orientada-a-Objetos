#include <iostream>
#include "cachorro.h"

using namespace std;

void Cachorro::enterrarOsso(){
    cout << "enterrou o osso" << endl;
}
void Cachorro::abanarRabo(){
    cout << "abanou o rabo" << endl;
}
void Cachorro::locomover(){
    cout << "cachorro anda" << endl;
}
void Cachorro::emitirsom(){
    cout << "cachorro faz auau" << endl;
}

void Cachorro::reagir(string frase){
    if (frase == "toma comida" || frase == "ola"){
        cout << "abanar e latir" << endl;
    }
    else {
        cout << "rosnar" << endl;
    }
}
void Cachorro::reagir(int hora, int minuto){
    if (hora < 12){
        cout << "abanar" << endl;
    }
    else if(hora >= 18){
        cout << "ignora" << endl;
    }
    else {
        cout << "abanar e latir" << endl;
    }
}
void Cachorro::reagir(bool dono){
    if (dono == true){
        cout << "abanar" << endl;
    }
    else {
        cout << "rosnar e latir" << endl;
    }
}
void Cachorro::reagir(int idade, float peso){
    if (idade < 5){
        if (peso < 10){
            cout << "abanar" << endl;
        }
        else {
            cout << "latir" << endl;
        }
    }
    else {
        if (peso < 10){
            cout << "rosnar" << endl;
        }
        else {
            cout << "ignorar" << endl;
        }
    }
}