/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include <iomanip>
#include "notafiscal.h"

using namespace std;

int main (){
    int tam;
    cout << "Tamanho do vetor: ";
    cin >> tam;

    NotaFiscal vet[tam];
    double total = vet->getTotalNota(vet, tam);

    cout << "\n";
    cout << "\n";
    cout << "      NOTA FISCAL" << endl;

    for (int i = 0; i < tam; i++){
        cout << "----------------------" << endl;
        cout << "Num peca: " << vet[i].getNumero_Peca() << endl;
        cout << "Descricao: " << vet[i].getDescricao() << endl;
        cout << "Unidades: " << vet[i].getQuantidade() << endl;
        cout << "Preco unitario: R$" << fixed << setprecision(2) << vet[i].getPreco() << endl;
    }

    cout << "\n";
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    cout << " Total da nota: R$" << fixed << setprecision(2) << total << endl; 
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-" << endl;


    return 0;
}