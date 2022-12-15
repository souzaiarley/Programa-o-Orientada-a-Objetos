#ifndef CANGURU_H
#define CANGURU_H

#include <iostream>
#include "mamifero.h"
using namespace std;

class Canguru: public Mamifero{
    public:
        void locomover();
        void usarBolsa();

};

#endif