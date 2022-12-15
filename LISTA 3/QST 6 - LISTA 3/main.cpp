/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include "aluno.h"

using namespace std;

int main (){
    Aluno * vet = new Aluno[15];

    for (int i = 0; i < 15; i++){
        string nome, serie, grau;

        cout << "Informe nome e serie: ";
        cin >> nome >> serie;
        cout << "Informe o grau: ";
        cin.ignore();
        getline(cin, grau);
        vet[i] = Aluno(nome, serie, grau);
    }

    cout << "\n    Lista de Alunos\n" << endl;

    for (int i = 0; i < 15; i++){
        cout << "Aluno " << i+1 << endl;
        cout << "Nome: " << vet[i].getNome() << endl;
        cout << "Serie: " << vet[i].getSerie() << "ª serie" << endl;
        cout << "Grau: " << vet[i].getGrau() << endl;
        cout << "======================" << endl;
    }

    return 0;
}