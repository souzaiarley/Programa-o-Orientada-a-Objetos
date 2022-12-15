/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/ 

#include <iostream>
#include "tempo.h"

using namespace std;

int main (){
    Tempo *t1 = new Tempo(3, 15, 10);
    Tempo *t2 = new Tempo(5, 20, 30);

    cout << "Tempo 1: ";
    t1->print();

    cout << "Tempo 2: ";
    t2->print();
 
    cout << "Tempo 3 (formado pela soma de tempo1 e tempo2): ";
    Tempo t3 = Tempo();
    t3 = t1->soma(t2);
    t3.print();

    cout << "Subtracao de tempo2 e tempo 1: ";
    t2->subtrair(*t1);
    t2->print();

    return 0;
}