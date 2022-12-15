#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "animal.h"
#include <iostream>
using namespace std;

class Mamifero: public Animal {
    private:
        string corPelo;

    public:
        void setCorPelo(string corPelo); 
        string getCorPelo();

        void locomover();
        void alimentar();
        void emitirsom();
};

#endif