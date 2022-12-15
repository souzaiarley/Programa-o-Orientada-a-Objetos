/*
Alunos:
    Antonio Joabe Alves Morais
    Edonísio Queiroz
    Iarley Natã Lopes Souza
*/

#include <iostream>
#include <string.h>

using namespace std;

class Mercado {
    /*
    atributos:
    publico:
        int quantidade, lucro
        string tipo, nome
    */

   /*
   construtor:
   deve iniciar os atributos
   tipo: carne, verduras, material
   */

  /*
  metodos:
  publico:
    void imprimir
    void porte (peq, med, grande) -> Baseado no lucro
  */

    private:
        int quantidade, lucro;
        string tipo, nome;
    
    public:
        Mercado(int _quant, int _lucro, string _tipo, string _nome);

        int getQuantidade();
        int getLucro();
        string getTipo();
        string getNome();

        void imprimir();
        void porte();
};

int Mercado::getQuantidade() {
    return quantidade;
}
int Mercado::getLucro() {
    return lucro;
}
string Mercado::getTipo() {
    return tipo;
}
string Mercado::getNome() {
    return nome;
}

Mercado::Mercado(int _quant, int _lucro, string _tipo, string _nome) {
    quantidade = _quant;
    lucro = _lucro;
    tipo = _tipo;
    nome = _nome;
}

void Mercado::porte() {
    if(lucro > 1000000) {
        cout << "A empresa eh de grande porte.";
    } else if(lucro > 100000 && lucro < 1000000) {
        cout << "A empresa eh de medio porte.";
    } else {
        cout << "A empresa eh de pequeno porte.";
    }
}

void Mercado::imprimir() {
    cout << "Tem " << getQuantidade() << " funcionarios." << endl;
    cout << "O lucro eh de " << getLucro() << " reais." << endl;
    cout << "Vende " << getTipo() << "." << endl;
    cout << "O nome eh: " << getNome() << "." << endl;
}

int main() {
    Mercado * empresa1 = new Mercado(200, 1500000, "carne", "Friboi");

    cout << "Empresa 1:" << endl;
    empresa1 -> imprimir();
    empresa1 -> porte();
    cout << "\n-----------------------------------\n";

    Mercado * empresa2 = new Mercado(12, 90000, "verdura", "Apple");

    cout << "Empresa 2:" << endl;
    empresa2 -> imprimir();
    empresa2 -> porte();

    return 0;
}