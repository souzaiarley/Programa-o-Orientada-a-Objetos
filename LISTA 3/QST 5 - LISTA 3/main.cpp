/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include "data.h"

using namespace std;

int main (){
    int opcao;

    cout << "================================================" << endl;
    cout << "Como deseja informar o mes?\n[1]numero do mes\n[2]nome do mes" << endl;
    cout << "Sua escolha: ";
    cin >> opcao;

    if (opcao == 1){
        int dia, mes, ano;

        cout << "Digite dia, mes e ano:";
        cin >> dia >> mes >> ano;

        Data * data = new Data(dia, mes, ano);
        cout << "\nData: ";
        data->printData();
        cout << "Quantidade de dias que ja passaram: " << data->calculaDias(dia, mes) << endl;
        cout << "================================================" << endl;
    }

    if (opcao == 2){
        int dia, ano;
        string mes;

        cout << "Digite dia, mes e ano:";
        cin >> dia;
        cin.ignore();
        cin >> mes;
        cin.ignore();
        cin >> ano;

        Data * data = new Data(dia, 3, ano);
        data->converteMes(mes);
        cout << "\nData: ";
        data->printData();
        cout << "Quantidade de dias que ja passaram: " << data->calculaDias(dia, mes) << endl;
        cout << "================================================" << endl;
    }
}