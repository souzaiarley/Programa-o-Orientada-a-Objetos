#ifndef MIDIA_H
#define MIDIA_H

#include <iostream>
#include <vector>
using namespace std;

class Midia {
    // Atributos
    private:
        string artista, titulo, genero;
        int lancamento;
        vector<string> faixas, keywords;

    // Métodos
    public:
    // Setters
        void setArtista(string artista);
        void setTitulo(string titulo);
        void setFaixas(string faixa);
        void setGenero(string genero);
        void setKeyWords(string keyword);
        void setLancamento(int lancamento);

    //Getters
        string getArtista();
        string getTitulo();
        string getGenero();
        int getLancamento();
        bool getFaixa(string faixa);
        vector<string> getFaixas();
        vector<string> getKeyWords();

    //Remove
        void removeFaixa(int num);
        void removeKeyWord(int num);
};

#endif