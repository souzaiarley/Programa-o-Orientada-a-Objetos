#include <iostream>
#include <string>
#include "Humano.h"
#include "Inseto.h"

using namespace std;

class SuperHeroi : public Humano, Inseto {
	private:
		string codinome, trauma, poderes;
	public:
		// Constructor
		SuperHeroi(string, string, string, string, string, string, bool, bool, bool, string, string, string);

		// Gets & Sets
		void setCodinome(string codinome);
		string getCodinome();
		void setTrauma(string trauma);
		string getTrauma();
		void setPoderes(string poderes);
		string getPoderes();

		// Methods
		void print();
};