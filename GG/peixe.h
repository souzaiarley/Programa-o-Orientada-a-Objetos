#ifndef PEIXE_H
#define PEIXE_H

#include <iostream>
#include "animal.h"
using namespace std;

class Peixe: public Animal{
    private:
        string corEscama;

    public:
        void setCorEscama(string corEscama);
        string getCorEscama();

        void soltarBolha();

        void locomover();
        void alimentar();
        void emitirsom();
};

#endif