#include <iostream>
#include "overnight.h"
using namespace std;

PacoteOverNight::PacoteOverNight(string nomeDestinatario, string enderecoDestinatario,
string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, 
string nomeRemetente, string enderecoRemetente, string cidadeRemetente, 
string estadoRemetente, string cepRemetente, float peso, float precoKG, float taxaAdc)
:Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario,
cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente, peso, precoKG){
    this -> taxaAdc = taxaAdc;
}
PacoteOverNight::PacoteOverNight(){}

double PacoteOverNight::calculaCustoOV(){
    return calculaCusto() + (taxaAdc * getPeso());
}

void PacoteOverNight::setTaxaAdc(float taxaAdc){
    this -> taxaAdc = taxaAdc;
}

double PacoteOverNight::getTaxaAdc(){
    return taxaAdc;
}