#include "Midia.h"

// Setters
void Midia::setArtista(string artista){
    this->artista = artista;
}
void Midia::setTitulo(string titulo){
    this->titulo = titulo;
}
void Midia::setFaixas(string faixa){
    faixas.push_back(faixa);
}
void Midia::setGenero(string genero){
    this->genero = genero;
}
void Midia::setKeyWords(string keyword){
    keywords.push_back(keyword);
}
void Midia::setLancamento(int lancamento){
    this->lancamento = lancamento;
}

// Getters
string Midia::getArtista(){
    return artista;
}
string Midia::getTitulo(){
    return titulo;
}
string Midia::getGenero(){
    return genero;
}
int Midia::getLancamento(){
    return lancamento;
}
bool Midia::getFaixa(string faixa){
    for (int i = 0; i < faixas.size(); i++){
        if (faixas[i] == faixa){
            return true;
        }
    }
    return false;
}
vector<string> Midia::getFaixas(){
    return faixas;
}
vector<string> Midia::getKeyWords(){
    return keywords;
}

void Midia::removeFaixa(int num){
    faixas.erase(faixas.begin()+num);
}
void Midia::removeKeyWord(int num){
    keywords.erase(keywords.begin()+num);
}