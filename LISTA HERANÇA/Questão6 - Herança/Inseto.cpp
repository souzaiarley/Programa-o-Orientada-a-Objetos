#include <iostream>
#include <string>
#include "Inseto.h"

using namespace std;

// Constructor
Inseto::Inseto() = default;
Inseto::Inseto(string nome, bool venenoso, bool alado, bool ferrao) {
	setNome(nome);
	setVenenoso(venenoso);
	setAlado(alado);
	setFerrao(ferrao);
}

// Gets & Sets
void Inseto::setNome(string nome) { this->nome = nome; }
string Inseto::getNome() { return this->nome; }

void Inseto::setVenenoso(bool venenoso) { this->venenoso = venenoso; } 
bool Inseto::getVenenoso() { return this->venenoso; }

void Inseto::setAlado(bool alado) { this->alado = alado; } 
bool Inseto::getAlado() { return this->alado; }

void Inseto::setFerrao(bool ferrao) { this->ferrao = ferrao; } 
bool Inseto::getFerrao() { return this->ferrao; }