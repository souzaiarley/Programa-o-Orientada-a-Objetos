#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal{
    private:
        string peso, idade, membros;

    public:
        void setPeso(string peso);
        void setIdade(string idade);
        void setMembros(string membros);

        string getPeso();
        string getIdade();
        string getMembros();

        virtual void locomover() = 0;
        virtual void alimentar() = 0;
        virtual void emitirsom() = 0;
};

#endif