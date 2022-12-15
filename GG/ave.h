#ifndef AVE_H
#define AVE_H

#include <iostream>
#include "animal.h"
using namespace std;

class Ave: public Animal{
    private:
        string corPena;

    public:
        void setCorPena(string corPena);
        string getCorPena();

        void fazerNinho();

        void locomover();
        void alimentar();
        void emitirsom();
};

#endif