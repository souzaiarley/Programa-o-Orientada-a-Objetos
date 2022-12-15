#include <iostream>
using namespace std;

class NumeroRacional {
    private:
        float numerador, denominador;

    public:
        NumeroRacional(float, float);
        NumeroRacional();

        NumeroRacional operator*(int num2);
        NumeroRacional operator/(int num2);
        NumeroRacional operator+(int num2);
        NumeroRacional operator-(int num2);

        bool operator==(NumeroRacional num2);
        bool operator!=(NumeroRacional num2);

        int getNumerador();
        int getDenominador();
};