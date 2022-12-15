#ifndef RESTAUTANTE_H
#define RESTAUTANTE_H

#include <iostream>
#include <string>
#include "empresa.h"

using namespace std;

class Restaurante: public Empresa {
    private:
        string tipo;
        float preco;

    public:
        Restaurante(string, string, string, string, int, int, string, float);
        Restaurante();

        void setTipo(string tipo);
        void setPreco(float preco);

        string getTipo();
        float getPreco();

        void printRestaurante();
};

#endif