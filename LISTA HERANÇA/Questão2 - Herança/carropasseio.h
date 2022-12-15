#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H

#include <iostream>
#include <string>
#include "veiculo.h"
#include "motor.h"

using namespace std;

class CarroPasseio: public Veiculo, public Motor {
    private:
        string modelo, cor;
    
    public:
        CarroPasseio(double, double, double, int, int, string, string);
        CarroPasseio();

        void setModelo(string modelo);
        void setCor(string cor);

        string getModelo();
        string getCor();

        void printCarroPasseio();
        
};

#endif