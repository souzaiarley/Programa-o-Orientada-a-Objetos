#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>
#include <string>

using namespace std;

class Motor {
    private:
        int cilindros, potencia;

    public:
        Motor(int, int);
        Motor();

        void setCilindros(int cilindros);
        void setPotencia(int potencia);

        int getCilindros();
        int getPotencia();

        void printMotor();

}; 

#endif