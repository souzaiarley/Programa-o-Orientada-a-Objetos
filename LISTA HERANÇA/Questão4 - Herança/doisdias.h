#pragma once
#include <iostream>
#include "pacote.h"
using namespace std;

class PacoteDoisDias: public Pacote {
    private:
        float taxaAdc;

    public:
        PacoteDoisDias(string, string, string, string, string, string, string, string, string, string, float, float, float);
        PacoteDoisDias();

        double calculaCustoDois();

        void setTaxaAdc(float taxaAdc);
        float getTaxaAdc();

};