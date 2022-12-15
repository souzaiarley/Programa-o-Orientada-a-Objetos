#include <iostream>
#include <string>
#include "SuperHeroi.h"

using namespace std;

// Constructor
SuperHeroi::SuperHeroi(string nomeH, string sexo, string idade, string lingua, string etnia, string nomeI, bool venenoso, bool alado, bool ferrao, string codinome, string trauma, string poderes) : Humano(nomeH, sexo, idade, lingua, etnia), Inseto(nomeI, venenoso, alado, ferrao) { 
	setCodinome(codinome);
	setTrauma(trauma);
	setPoderes(poderes);
}

// Gets & Sets
void SuperHeroi::setCodinome(string codinome) { this->codinome = codinome; } 
string SuperHeroi::getCodinome() { return this->codinome; }

void SuperHeroi::setTrauma(string trauma) { this->trauma = trauma; } 
string SuperHeroi::getTrauma() { return this->trauma; }

void SuperHeroi::setPoderes(string poderes) { this->poderes = poderes; } 
string SuperHeroi::getPoderes() { return this->poderes; }

// Methods
void SuperHeroi::print() {
	cout << "Codinome do super heroi: " << getCodinome() << endl;
	cout << "Trauma: " << getTrauma() << endl;
	cout << "Poderes: " << getPoderes() << endl;

	cout << "Nome humano: " << Humano::getNome() << endl;
	cout << "Sexo: " << getSexo() << endl;
	cout << "Idade: " << getIdade() << endl;
	cout << "Lingua: " << getLingua() << endl;
	cout << "Etnia: " << getEtnia() << endl;

	cout << "Nome inseto: " << Inseto::getNome() << endl;
	cout << "Venenoso? " << (getVenenoso() ? "Sim" : "Nao") << endl;
	cout << "Alado? " << (getAlado() ? "Sim" : "Nao") << endl;
	cout << "Tem ferrao? " << (getFerrao() ? "Sim" : "Nao") << endl;
}
