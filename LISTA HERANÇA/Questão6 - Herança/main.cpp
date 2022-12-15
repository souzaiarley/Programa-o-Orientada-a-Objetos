/*  Nome: Iarley Natã Lopes Souza / Antonio Joabe Alves Morais
    Matrícula: 535779 / 539029
    Curso: CC
*/ 

#include <iostream>
#include <string>
#include "SuperHeroi.h"

using namespace std;

int main() {
	SuperHeroi * heroi = new SuperHeroi("Teresa", "Feminino", "27", "Espanhol", "Latina", "Escorpiao", true, false, true, "La Aguja", "Morte dos familiares", "Veneno");

	heroi -> SuperHeroi::print();

	return 0;
}