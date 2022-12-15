#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include "veiculo.h"
#include "motor.h"

class Caminhao: public Veiculo, public Motor{
    private:
        float tonelada, altmax, comp;

    public:
        Caminhao(double, double, double, int, int, float, float, float);
        Caminhao();

        void setTonelada(float tonelada);
        void setAltmax(float altmax);
        void setComp(float comp);

        float getTonelada();
        float getAltmax();
        float getComp();

        void printCaminhao();

};

#endif