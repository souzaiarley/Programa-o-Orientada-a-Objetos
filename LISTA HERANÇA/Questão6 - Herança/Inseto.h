#include <iostream>
#include <string>

using namespace std;

class Inseto {
	private:
		string nome;
		bool venenoso, alado, ferrao;
	public:
		// Constructor
		Inseto();
		Inseto(string, bool, bool, bool);

		// Gets & Sets
		void setNome(string nome);
		string getNome();

		void setVenenoso(bool venenoso);
		bool getVenenoso();

		void setAlado(bool alado);
		bool getAlado();

		void setFerrao(bool ferrao);
		bool getFerrao();
};