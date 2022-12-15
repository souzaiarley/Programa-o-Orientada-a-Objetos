#include "Dvd.h"

// Setters
void DVD::setFormatoAudio(vector<string> formatoAudio){
    this->formatoAudio = formatoAudio;
}
void DVD::setFormatoTela(vector<string> formatoTela){
    this->formatoTela = formatoTela;
}
void DVD::setLegendas(vector<string> legendas){
    this->legendas = legendas;
}

// Getters
vector<string> DVD::getFormatoAudio(){
    return formatoAudio;
}
vector<string> DVD::getFormatoTela(){
    return formatoTela;
}
vector<string> DVD::getLegendas(){
    return legendas;
}

void DVD::removeFormatoAudio(int num){
    formatoAudio.erase(formatoAudio.begin()+num);
}
void DVD::removeFormatoTela(int num){
    formatoTela.erase(formatoTela.begin()+num);
}
void DVD::removeLegendas(int num){
    legendas.erase(legendas.begin()+num);
}