#pragma once
#include <iostream>
using namespace std;
#include "veiculo.h"

class VeiculoTerrestre: virtual public Veiculo{
    private:
        string potencia, placa, cambio;

    public:
        VeiculoTerrestre(string, string, string, string, string, string);
        VeiculoTerrestre();

        void setPotencia(string potencia);
        void setPlaca(string placa);
        void setCambio(string cambio);

        string getPotencia();
        string getPlaca();
        string getCambio();

};