#pragma once
#include <iostream>

using namespace std;

class Veiculo {
    private:
        string cor, modelo, ano;

    public:
        Veiculo();
        Veiculo(string, string, string);
        
        void setCor(string cor);
        void setModelo(string modelo);
        void setAno(string ano);

        string getCor();
        string getModelo();
        string getAno();
};