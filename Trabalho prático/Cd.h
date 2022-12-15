#ifndef CD_H
#define CD_H

#include "Midia.h"

class CD: public Midia {
    // Atributos
    private:
         int duracao;
         float volume;
         bool coletanea;

    // Métodos
    public:
    // Setters
        void setDuracao(int duracao);
        void setVolume(float volume);
        void setColetanea(bool coletanea);

    // Getters
        int getDuracao();
        float getVolume();
        bool getColetanea();
};

#endif