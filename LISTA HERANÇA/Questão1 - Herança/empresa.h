#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>

using namespace std;

class Empresa {
    private:
        string nome, endereco, cidade, estado;
        int cep, fone;

    public:
        Empresa(string, string, string, string, int, int);
        Empresa();

        void setNome(string nome);
        void setEndereco(string endereco);
        void setCidade(string cidade);
        void setEstado(string estado);
        void setCep(int cep);
        void setFone(int fone);

        string getNome();
        string getEndereco();
        string getCidade();
        string getEstado();
        int getCep();
        int getFone();

        void printEmpresa();

};

#endif