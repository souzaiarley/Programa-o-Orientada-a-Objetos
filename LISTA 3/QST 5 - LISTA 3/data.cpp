#include <iostream>
#include "data.h"

using namespace std;

Data::Data(int dia, int mes, int ano){
    if (mes % 2 == 1){
        while (dia < 1 || dia > 31){
            cout << "Informe um dia valido:";
            cin >> dia;
        }
    }

    if (mes % 2 == 0){
        while (dia < 1 || dia > 30){
            cout << "Informe um dia valido:";
            cin >> dia;
        }
    }

    while (mes < 1 || mes > 12){
        cout << "Informe um mes valido:";
        cin >> mes;
    }

    this -> dia = dia;
    this -> mes = mes;
    this -> ano = ano;
}
Data::Data(){}

void Data::setDia(int dia){
    if (mes % 2 == 1){
        while (dia < 1 || dia > 31){
            cout << "Informe um dia valido:";
            cin >> dia;
        }
    }

    if (mes % 2 == 0){
        while (dia < 1 || dia > 30){
            cout << "Informe um dia valido:";
            cin >> dia;
        }
    }
    this -> dia = dia;
}
void Data::setMes(int mes){
    while (mes < 1 || mes > 12){
        cout << "Informe um mes valido:";
        cin >> mes;
    }
    this -> mes = mes;
}
void Data::setAno(int ano){
    this -> ano = ano;
}

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}

void Data::printData(){
    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;   
}

int Data::calculaDias(int dia, int mes){
    int total = 0;

    for (int i = 1; i < mes; i++){
        if (i % 2 == 0){
            total = total + 30;
        }
        if (i % 2 == 1){
            total = total + 31;
        }
    }

    total = total + dia;

    return total;
}

int Data::calculaDias(int dia, string mes){
    int total = 0;
    int _mes = 0;

    if (mes == "janeiro"){
        _mes = 1;
    }

    if (mes == "fervereiro"){
        _mes = 2;
    }

    if (mes == "marco"){
        _mes = 3;
    }

    if (mes == "abril"){
        _mes = 4;
    }

    if (mes == "maio"){
        _mes = 5;
    }

    if (mes == "junho"){
        _mes = 6;
    }

    if (mes == "julho"){
        _mes = 7;
    }

    if (mes == "agosto"){
        _mes = 8;
    }

    if (mes == "setembro"){
        _mes = 9;
    }

    if (mes == "outubro"){
        _mes = 10;
    }

    if (mes == "novembro"){
        _mes = 11;
    }

    if (mes == "dezembro"){
        _mes = 12;
    }

    for (int i = 1; i < _mes; i++){
        if (i % 2 == 0){
            total = total + 30;
        }
        if (i % 2 == 1){
            total = total + 31;
        }
    }

    total = total + dia;

    return total;
}

void Data::converteMes(string mes){
    int _mes = 0;

    if (mes == "janeiro"){
        _mes = 1;
    }

    if (mes == "fervereiro"){
        _mes = 2;
    }

    if (mes == "marco"){
        _mes = 3;
    }

    if (mes == "abril"){
        _mes = 4;
    }

    if (mes == "maio"){
        _mes = 5;
    }

    if (mes == "junho"){
        _mes = 6;
    }

    if (mes == "julho"){
        _mes = 7;
    }

    if (mes == "agosto"){
        _mes = 8;
    }

    if (mes == "setembro"){
        _mes = 9;
    }

    if (mes == "outubro"){
        _mes = 10;
    }

    if (mes == "novembro"){
        _mes = 11;
    }

    if (mes == "dezembro"){
        _mes = 12;
    }

    setMes(_mes);
}