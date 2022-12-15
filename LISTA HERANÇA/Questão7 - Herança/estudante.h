#include <iostream>

using namespace std;

class Estudante {
    private:
        string nome, matricula, curso;

    public:
        Estudante(string, string, string);
        Estudante();

        void setNome(string nome);
        void setMatricula(string matricula);
        void setCurso(string curso);

        string getNome();
        string getMatricula();
        string getCurso();
};