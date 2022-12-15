/*  Nome: Iarley Natã Lopes Souza / Antonio Joabe Alves Morais
    Matrícula: 535779 / 539029
    Curso: CC
*/ 

#include <iostream>
#include <iomanip>
#include "conta.h"

using namespace std;

int main (){
    double saldo1, credito1, debito1;

    cout << "Informe seu saldo: R$";
    cin >> saldo1;
    Conta *conta1 = new Conta(saldo1);

    cout << "Quando de credito deseja adicionar? R$";
    cin >> credito1;
    conta1 -> credito(credito1);

    cout << "Quanto de debito deseja retirar? R$";
    cin >> debito1;
    conta1 -> debito(debito1);

    cout << "Saldo: R$" << fixed  << setprecision(2) <<  conta1->getSaldo() << endl;
    cout << "\n";

    
    double saldo2, credito2, debito2;

    cout << "Informe seu saldo: R$";
    cin >> saldo2;
    Conta *conta2 = new Conta(saldo2);

    cout << "Quando de credito deseja adicionar? R$";
    cin >> credito2;
    conta2 -> credito(credito2);

    cout << "Quanto de debito deseja retirar? R$";
    cin >> debito2;
    conta2 -> debito(debito2);

    cout << "Saldo: R$" << fixed  << setprecision(2) <<  conta2->getSaldo() << endl;
    cout << "\n";

    return 0;
}