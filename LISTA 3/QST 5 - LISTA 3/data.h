#include <iostream>

using namespace std;

class Data {
    private:
        int dia, mes, ano;

    public:
        Data(int, int, int);
        Data();

        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);

        int getDia();
        int getMes();
        int getAno();

        void printData();

        int calculaDias(int dia, int mes);
        int calculaDias(int dia, string mes);

        void converteMes(string mes);

};