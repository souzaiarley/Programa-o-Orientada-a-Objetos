#include <iostream>

using namespace std;

class Aluno {
    private:
        string nome, serie, grau;

    public:
        Aluno(string, string, string);
        Aluno();

        void setNome(string nome);
        void setSerie(string serie);
        void setGrau(string grau);

        string getNome();
        string getSerie();
        string getGrau();
        
};