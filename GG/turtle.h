#ifndef TURTLE_H
#define TURTLE_H

#include <iostream>
#include "reptil.h"
using namespace std;

class Turtle: public Reptil{
    public:
        void locomover();
};

#endif