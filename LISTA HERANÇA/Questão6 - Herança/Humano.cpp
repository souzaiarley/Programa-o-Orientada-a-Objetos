#include <iostream>
#include <string>
#include "Humano.h"

using namespace std;

// Constructor
Humano::Humano() = default;
Humano::Humano(string nome, string sexo, string idade, string lingua, string etnia) {
	setNome(nome);
	setSexo(sexo);
	setIdade(idade);
	setLingua(lingua);
	setEtnia(etnia);
}

// Gets & Sets
void Humano::setNome(string nome) { this->nome = nome; } 
string Humano::getNome() { return this->nome; }

void Humano::setSexo(string sexo) { this->sexo = sexo; } 
string Humano::getSexo() { return this->sexo; }

void Humano::setIdade(string idade) { this->idade = idade; } 
string Humano::getIdade() { return this->idade; }

void Humano::setLingua(string lingua) { this->lingua = lingua; } 
string Humano::getLingua() { return this->lingua; }

void Humano::setEtnia(string etnia) { this->etnia = etnia; } 
string Humano::getEtnia() { return this->etnia; }