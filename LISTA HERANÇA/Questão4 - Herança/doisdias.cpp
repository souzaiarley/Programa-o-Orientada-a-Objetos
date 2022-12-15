#include <iostream>
#include "doisdias.h"
using namespace std;

PacoteDoisDias::PacoteDoisDias(string nomeDestinatario, string enderecoDestinatario,
string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, 
string nomeRemetente, string enderecoRemetente, string cidadeRemetente, 
string estadoRemetente, string cepRemetente, float peso, float precoKG, float taxaAdc)
:Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario,
cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente, peso, precoKG){
    this -> taxaAdc = taxaAdc;
}
PacoteDoisDias::PacoteDoisDias(){}

double PacoteDoisDias::calculaCustoDois(){
    return calculaCusto() + taxaAdc;
}

void PacoteDoisDias::setTaxaAdc(float taxaAdc){
    this -> taxaAdc = taxaAdc;
}

float PacoteDoisDias::getTaxaAdc(){
    return taxaAdc;
}