#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string>

using namespace std;

class Veiculo {
    private:
        double peso, velmax, preco;

    public:
        Veiculo(double, double, double);
        Veiculo();

        void setPeso(double peso);
        void setVelmax(double velmax);
        void setPreco(double preco);

        double getPeso();
        double getVelmax();
        double getPreco();

        void printVeiculo();

};

#endif