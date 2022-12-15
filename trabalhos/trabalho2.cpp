/*
Alunos:
    Antonio Joabe Alves Morais | Matrícula: 539029
    Iarley Natã Lopes Souza | Matrícula: 535779
*/

//bibliotecas
#include <iostream>
#include <string>

using namespace std;

//classe
class Membros {

    //atributos
    private:
        string nome, ocupacao, email, palavraChave;
        int idade;
        char sx;

    public:

        //construtor (protótipo)
        Membros(int x);

        //sets (protótipo)
        void setNome(string nome);
        void setOcupacao(string ocupacao);
        void setEmail(string email);
        void setPalavraChave(string palavraChave);
        void setIdade(int idade);
        void setSexo(char sexo);

        //gets (protótipo)
        string getNome();
        string getOcupacao();
        string getEmail();
        string getPalavraChave();
        int getIdade();
        char getSexo();

        //imprimir (protótipo)
        void imprimir(int x);
};

//construtor (implementação)
Membros::Membros(int x){
    if (x == 1){
        setNome("Mario");
        setOcupacao("Professor");
        setEmail("marioprof@ufc.br");
        setPalavraChave("mario123");
        setIdade(42);
        setSexo('M');
    }
    if (x == 2){
        setNome("Gustavo");
        setOcupacao("Tecnico de TI");
        setEmail("tecgus@ufc.br");
        setPalavraChave("121212");
        setIdade(29);
        setSexo('M');
    }
    if (x == 3){
        setNome("Lucy");
        setOcupacao("Estudante");
        setEmail("lulu@alu.ufc.br");
        setPalavraChave("lulinda");
        setIdade(19);
        setSexo('F');
    }
}

//sets (implementação)
void Membros::setNome(string nome){
    this -> nome = nome;
}
void Membros::setOcupacao(string ocupacao){
    this -> ocupacao = ocupacao;
}
void Membros::setEmail(string email){
    this -> email = email;
}
void Membros::setPalavraChave(string palavraChave){
    this -> palavraChave = palavraChave;
}
void Membros::setIdade(int idade){
    this -> idade = idade;
}
void Membros::setSexo(char sexo){
    sx = sexo;
}

//gets (implementação)
string Membros::getNome(){
    return nome;
}
string Membros::getOcupacao(){
    return ocupacao;
}
string Membros::getEmail(){
    return email;
}
string Membros::getPalavraChave(){
    return palavraChave;
}
int Membros::getIdade(){
    return idade;
}
char Membros::getSexo(){
    return sx;
}

//imprimir (implementação)
void Membros::imprimir(int x){
    cout << "------------------------" << endl;
    cout << "Tipo de usuario: ";
    if (x == 1){
        cout << "PROFESSOR" << endl;
    }
    if (x == 2){
        cout << "TECNICO" << endl;
    }
    if (x == 3){
        cout << "ALUNO" << endl;
    }
    cout << '\n';
    cout << "Nome: " << getNome() << endl;
    cout << "Ocupacao: " << getOcupacao() << endl;
    cout << "Email: " << getEmail() << endl;
    cout << "Palavra Chave: " << getPalavraChave() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Sexo: " << getSexo() << endl;
}

//funcao main
int main (){
    Membros * professor = new Membros(1);
    Membros * tecnico = new Membros(2);
    Membros * aluno = new Membros(3);

    professor -> imprimir(1);
    tecnico -> imprimir(2);
    aluno -> imprimir(3);

    return 0;
}