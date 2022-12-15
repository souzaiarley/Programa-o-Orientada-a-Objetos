#include <iostream>
using namespace std;

class Estacionamento {
    private:
        string placa, modelo;
        int horaEntrada, minutoEntrada ,segundoEntrada;
        int horaSaida, minutoSaida, segundoSaida;

    public:
        Estacionamento();

        void setPlaca(string placa);
        void setModelo(string modelo);
        void setHoraEntrada(int horaEntrada);
        void setMinutoEntrada(int minutoEntrada); 
        void setSegundoEntrada(int segundoEntrada);
        void setHoraSaida(int horaSaida);
        void setMinutoSaida(int minutoSaida);
        void setSegundoSaida(int segundoSaida);

        string getPlaca();
        string getModelo();
        int getHoraEntrada();
        int getMinutoEntrada();
        int getSegundoEntrada();
        int getHoraSaida();
        int getMinutoSaida();
        int getSegundoSaida();

        void printCarro();

        float Custo(int hora);

};