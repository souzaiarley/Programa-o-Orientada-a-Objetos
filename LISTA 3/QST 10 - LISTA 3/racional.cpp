#include <iostream>
#include "racional.h"

using namespace std;

NumeroRacional::NumeroRacional(float numerador, float denominador){
    while (denominador <= 0){
        cout << "Denominador possui valor invalido.\nTente novamente.\nDenominador:" << endl;
        cin >> denominador;
    }
    this -> numerador = numerador;
    this -> denominador = denominador;
}

NumeroRacional::NumeroRacional(){}

NumeroRacional NumeroRacional::operator*(int num2){
    NumeroRacional num3;

    num3.numerador = numerador * num2;
    num3.denominador = denominador * 1;
    return num3;
}

NumeroRacional NumeroRacional::operator/(int num2){
    NumeroRacional num3;

    num3.numerador = numerador * 1;
    num3.denominador = denominador * num2;
    return num3;
}

NumeroRacional NumeroRacional::operator+(int num2){
    NumeroRacional num3;

    num3.numerador = (numerador * 1) + (denominador * num2);
    num3.denominador = denominador * 1;

    return num3;
}

NumeroRacional NumeroRacional::operator-(int num2){
    NumeroRacional num3;

    num3.numerador = (numerador * 1) - (denominador * num2);
    num3.denominador = denominador * 1;

    return num3;
}

bool NumeroRacional::operator==(NumeroRacional num2){
    if (numerador/denominador == num2.numerador/num2.denominador){
        cout << "Sao iguais." << endl;
        return true;
    }

    cout << "N sao iguais." << endl;
    return false;
}

bool NumeroRacional::operator!=(NumeroRacional num2){
    if (numerador/denominador != num2.numerador/num2.denominador){
        cout << "Sao diferentes." << endl;
        return true;
    }

    cout << "N sao diferentes." << endl;
    return false;
}

int NumeroRacional::getNumerador(){
    return numerador;
}
int NumeroRacional::getDenominador(){
    return denominador;
}