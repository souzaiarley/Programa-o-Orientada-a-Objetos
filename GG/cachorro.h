#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include "lobo.h"

using namespace std;

class Cachorro: public Lobo{
    public:
        void enterrarOsso();
        void abanarRabo();

        void locomover();
        void emitirsom();

        void reagir(string frase);
        void reagir(int hora, int minuto);
        void reagir(bool dono);
        void reagir(int idade, float peso);
};

#endif