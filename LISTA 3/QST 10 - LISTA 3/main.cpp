/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include "racional.h"

using namespace std;

int main (){
    NumeroRacional *num1 = new NumeroRacional(3,4); 
    int num2 = 4;
    NumeroRacional num3;
    bool igual;

    num3 = *num1 + num2;
    cout << "Soma num1 + num2 = " << num3.getNumerador() << "/" << num3.getDenominador() << endl;

    num3 = *num1 - num2;
    cout << "Subtracao num1 - num2 = " << num3.getNumerador() << "/" << num3.getDenominador() << endl;

    num3 = *num1 * num2;
    cout << "Multiplicacao num1 * num2 = " << num3.getNumerador() << "/" << num3.getDenominador() << endl;

    num3 = *num1 / num2;
    cout << "Divisao num1 / num2 = " << num3.getNumerador() << "/" << num3.getDenominador() << endl;

    return 0;
}