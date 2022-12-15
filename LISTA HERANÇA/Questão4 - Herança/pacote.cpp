#include <iostream>
#include "pacote.h"
using namespace std;

Pacote::Pacote(string nomeDestinatario, string enderecoDestinatario,
string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, 
string nomeRemetente, string enderecoRemetente, string cidadeRemetente, 
string estadoRemetente, string cepRemetente, float peso, float precoKG){
    while (peso <= 0){
        cout << "ERRO: Peso possui valor invalido. Tente novamente.\nInforme peso:";
        cin >> peso;
    }

    while (precoKG <= 0){
        cout << "ERRO: Preco por KG possui valor invalido. Tente novamente.\nInforme o preco por KG:";
        cin >> precoKG;
    }
    
    this -> nomeDestinatario = nomeDestinatario;
    this -> enderecoDestinatario = enderecoDestinatario;
    this -> cidadeDestinatario = cidadeDestinatario;
    this -> estadoDestinatario = estadoDestinatario;
    this -> cepDestinatario = cepDestinatario;
    this -> nomeRemetente = nomeRemetente;
    this -> enderecoRemetente = enderecoRemetente;
    this -> cidadeRemetente = cidadeRemetente;
    this -> estadoRemetente = estadoRemetente;
    this -> cepRemetente = cepRemetente;
    this -> peso = peso;
    this -> precoKG = precoKG;
    
}
Pacote::Pacote(){}

double Pacote::calculaCusto(){
    return peso*precoKG;
}

void Pacote::setNomeDestinatario(string nomeDestinatario) { this->nomeDestinatario = nomeDestinatario; } 
void Pacote::setEnderecoDestinatario(string enderecoDestinatario) { this->enderecoDestinatario = enderecoDestinatario; } 
void Pacote::setCidadeDestinatario(string cidadeDestinatario) { this->cidadeDestinatario = cidadeDestinatario; } 
void Pacote::setEstadoDestinatario(string estadoDestinatario) { this->estadoDestinatario = estadoDestinatario; } 
void Pacote::setCepDestinatario(string cepDestinatario) { this->cepDestinatario = cepDestinatario; } 
void Pacote::setNomeRemetente(string nomeRemetente) { this->nomeRemetente = nomeRemetente; } 
void Pacote::setEnderecoRemetente(string enderecoRemetente) { this->enderecoRemetente = enderecoRemetente; } 
void Pacote::setCidadeRemetente(string cidadeRemetente) { this->cidadeRemetente = cidadeRemetente; } 
void Pacote::setEstadoRemetente(string estadoRemetente) { this->estadoRemetente = estadoRemetente; } 
void Pacote::setCepRemetente(string cepRemetente) { this->cepRemetente = cepRemetente; } 
void Pacote::setPeso(float peso){ this->peso = peso; }
void Pacote::setprecoKG(float precoKG){ this->precoKG = precoKG;}

float Pacote::getPeso(){
    return peso;
}