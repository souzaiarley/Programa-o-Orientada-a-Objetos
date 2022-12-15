#ifndef REPTIL_H
#define REPTIL_H

#include <iostream>
#include "animal.h"
using namespace std;

class Reptil : public Animal {
    private:
        string corEscama;

    public:
        void setCorEscama(string corEscama);
        string getCorEscama();

        void locomover();
        void alimentar();
        void emitirsom();
};

#endif