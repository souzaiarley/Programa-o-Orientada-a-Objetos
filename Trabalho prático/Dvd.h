#ifndef DVD_H
#define DVD_H

#include "Midia.h"

class DVD: public Midia {
    // Atributos
    private:
        vector<string> formatoAudio, formatoTela, legendas;

    // Métodos
    public:
        // Setters
        void setFormatoAudio(vector<string> formatoAudio);
        void setFormatoTela(vector<string> formatoTela);
        void setLegendas(vector<string> legendas);

        // Getters
        vector<string> getFormatoAudio();
        vector<string> getFormatoTela();
        vector<string> getLegendas();

        // Remove
        void removeFormatoAudio(int num);
        void removeFormatoTela(int num);
        void removeLegendas(int num);
};

#endif