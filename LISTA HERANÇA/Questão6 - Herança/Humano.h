#include <iostream>
#include <string>

using namespace std;

class Humano {
	private:
		string nome, sexo, idade, lingua, etnia;
	public:
		// Constructor
		Humano();
		Humano(string nome, string sexo, string idade, string lingua, string etnia);

		// Gets & Sets
		void setNome(string nome); 
		string getNome();

		void setSexo(string sexo);
		string getSexo();

		void setIdade(string idade);
		string getIdade();

		void setLingua(string lingua);
		string getLingua();

		void setEtnia(string etnia);
		string getEtnia();
};