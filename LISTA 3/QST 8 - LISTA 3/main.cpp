/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include <iomanip>
#include "tempo.h"
#include "estacionamento.h"

using namespace std;

int main (){
    Estacionamento *vet = new Estacionamento[5];

    for (int i = 0; i < 5; i++){
        string modelo, placa;
        int hentrada, hsaida;
        cout << "=================================" << endl;
        cout << "Digite o modelo e a placa:";
        cin >> modelo >> placa;

        cout << "Digite a hora de entrada e de saida:";
        cin >> hentrada >> hsaida;

        while (hentrada < 1 || hentrada > 23){
            cout << "Hora de entrada invalida, tente novamente.\nHora de entrada:";
            cin >> hentrada;

        }
        while (hsaida < 1 || hsaida > 23){
            cout << "Hora de saida invalida, tente novamente.\nHora de saida:";
            cin >> hsaida;

        }

        if (hentrada > hsaida){
            int aux;
            aux = (24-hentrada)+hsaida;
            hsaida = aux;
            hentrada = 0;
        }

        vet[i].setHoraEntrada(hentrada);
        vet[i].setMinutoEntrada(0);
        vet[i].setSegundoEntrada(0);
        vet[i].setHoraSaida(hsaida);
        vet[i].setMinutoSaida(0);
        vet[i].setSegundoSaida(0);
        vet[i].setPlaca(placa);
        vet[i].setModelo(modelo);

        Tempo *entrada = new Tempo(vet[i].getHoraEntrada(), vet[i].getMinutoEntrada(), vet[i].getSegundoEntrada());
        Tempo *saida = new Tempo(vet[i].getHoraSaida(), vet[i].getMinutoSaida(), vet[i].getSegundoSaida());

        saida->subtrair(*entrada);
        vet[i].printCarro();
        cout << "Custo no Estacionamento: R$" << fixed << setprecision(2) << vet[i].Custo(saida->getHora()) << endl;
        cout << "\n";
    }

}