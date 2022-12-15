/*  Nome: Iarley Natã Lopes Souza / Antonio Joabe Alves Morais
    Matrícula: 535779 / 539029
    Curso: CC
*/ 

#include <iostream>
using namespace std;
#include "anfibio.h"

int main (){
    VeiculoAnfibio * v = new VeiculoAnfibio("Azul", "Sedan", "2020", 
    "100", "PUC-2014", "Automatico", 
    "4m", "1,7m", "180Km/h",
    "900kg", "5", "Toyota");

    cout << "===================" << endl;
    v->print();
    cout << "===================" << endl;

    return 0;
}