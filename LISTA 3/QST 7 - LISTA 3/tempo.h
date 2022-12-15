#include <iostream>

class Tempo {
    private:
        int hora, minuto, segundo;

    public:
        Tempo(int, int, int);
        Tempo();

        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);

        int getHora();
        int getMinuto();
        int getSegundo();

        void print();

        void subtrair(Tempo &tempo);

        void soma(Tempo &tempo);
        Tempo soma(Tempo *tempo);

};