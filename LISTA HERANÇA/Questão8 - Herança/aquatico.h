#pragma once
#include <iostream>
using namespace std;

#include "veiculo.h"

class VeiculoAquatico: virtual public Veiculo{
    private:
        string comprimento, altura, velocidade;

    public:
        VeiculoAquatico(string, string, string, string, string, string);
        VeiculoAquatico();

        void setComprimento(string comprimento);
        void setAltura(string altura);
        void setVelocidade(string velocidade);

        string getComprimento();
        string getAltura();
        string getVelocidade();

};