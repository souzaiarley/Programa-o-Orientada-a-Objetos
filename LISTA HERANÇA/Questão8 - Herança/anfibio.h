#pragma once
#include <iostream>
using namespace std;
#include "aquatico.h"
#include "terrestre.h"

class VeiculoAnfibio: public VeiculoTerrestre, VeiculoAquatico{
    private:
        string peso, passageiros, marca;

    public:
        VeiculoAnfibio(string, string, string, string, string, string, string, string, string, string, string, string);
        VeiculoAnfibio();

        void setPeso(string peso);
        void setPassageiros(string passageiros);
        void setMarca(string marca);

        string getPeso();
        string getPassageiros();
        string getMarca();

        void print();
};