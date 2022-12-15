#pragma once
#include <iostream>
#include "pacote.h"
using namespace std;

class PacoteOverNight: public Pacote{
    private:
        float taxaAdc;

    public:
        PacoteOverNight(string, string, string, string, string, string, string, string, string, string, float, float, float);
        PacoteOverNight();

        double calculaCustoOV();

        void setTaxaAdc(float taxaAdc);
        double getTaxaAdc();

};