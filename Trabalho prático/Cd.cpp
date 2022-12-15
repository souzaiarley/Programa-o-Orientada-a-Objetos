#include "Cd.h"

// Setters
void CD::setDuracao(int duracao){
    this->duracao = duracao;
}
void CD::setVolume(float volume){
    this->volume = volume;
}
void CD::setColetanea(bool coletanea){
    this->coletanea = coletanea;
}

// Getters
int CD::getDuracao(){
    return duracao;
}
float CD::getVolume(){
    return volume;
}
bool CD::getColetanea(){
    return coletanea;
}