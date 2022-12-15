/*  Nome: Iarley Natã Lopes Souza / Antonio Joabe Alves Morais
    Matrícula: 535779 / 539029
    Curso: CC
*/ 

#include <iostream>
#include <iomanip>
#include "poupanca.h"
#include "contacorrente.h"

using namespace std;

int main (){
    Poupanca *conta1 = new Poupanca(1000, 0.05);
    cout << "Rendimento da conta 1: R$" << fixed << setprecision(2) << conta1->CalculaRendimento() << endl;

    cout << "====================================" << endl;

    ContaCorrente *conta2 = new ContaCorrente(1000, 10);
    conta2->credito(100);
    cout << "Saldo apos adicionar credito: R$" << fixed << setprecision(2) << conta2->getSaldo() << endl;

    conta2->debito(50);
    cout << "Saldo apos debitar: R$" << fixed << setprecision(2) << conta2->getSaldo() << endl;


    return 0;
}