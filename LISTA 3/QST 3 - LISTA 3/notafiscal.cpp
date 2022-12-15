#include <iostream>
#include "notafiscal.h"

using namespace std;

void NotaFiscal::setNumero_Peca(string numero_peca){
    this -> numero_peca = numero_peca;
}
void NotaFiscal::setDescricao(string descricao){
    this -> descricao = descricao;
}
void NotaFiscal::setQuantidade(int quantidade){
    this -> quantidade = quantidade;
}
void NotaFiscal::setPreco(double preco){
    this -> preco = preco;
}

string NotaFiscal::getNumero_Peca(){
    return numero_peca;
}
string NotaFiscal::getDescricao(){
    return descricao;
}
int NotaFiscal::getQuantidade(){
    return quantidade;
}
double NotaFiscal::getPreco(){
    return preco;
}

double NotaFiscal::getTotalNota(NotaFiscal v[], int tamanho){
    string numpeca, descricao;
    int quant;
    double preco, total = 0;

    for (int i = 0; i < tamanho ; i++){
        cout << "===================" << endl;
        cin.ignore();
        cout << "Numero da peca: ";
        getline(cin, numpeca);
        v[i].setNumero_Peca(numpeca);

        cout << "Descricao da peca: ";
        getline(cin, descricao);
        v[i].setDescricao(descricao);

        cout << "Quantidade de pecas: ";
        cin >> quant;
        v[i].setQuantidade(quant);

        cout << "Preco unitario: R$";
        cin >> preco;
        v[i].setPreco(preco);

        total = total + v[i].getTotalProduto(); 
    }

    return total;
}

double NotaFiscal::getTotalProduto(){
    return preco*quantidade;
}