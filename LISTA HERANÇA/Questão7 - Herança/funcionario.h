#include <iostream>

using namespace std;

class Funcionario {
    private:
        string _nome, turno;
        float salario;
        int RG;

    public:
        Funcionario(string, float, string);
        Funcionario();

        void set_Nome(string _nome);
        void setSalario(float salario);
        void setTurno(string turno);

        string get_Nome();
        float getSalario();
        string getTurno();

};