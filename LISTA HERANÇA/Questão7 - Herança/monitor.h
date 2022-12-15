#include <iostream>
#include "estudante.h"
#include "funcionario.h"

using namespace std;

class Monitor : public Estudante, public Funcionario {
    private:
        string disciplina, cargahoraria;

    public:
        Monitor(string, string, string, string, float, string, string, string);
        Monitor();

        void setDisciplina(string disciplina);
        void setCargahoraria(string cargahoraria);

        string getDisciplina();
        string getCargahoraria();

        void printMonitor();

};