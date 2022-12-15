#include <iostream>
#include "complexo.h"

using namespace std;

int main() {
	Complexo com1(2.4, 9.1);
	Complexo com2(5.5, 6.1);

	Complexo com3(com1 + com2);
	com3.print();

	Complexo com4(com1 - com2);
	com4.print();

	Complexo com5(com1 * com2);
	com5.print();

	cout << ((com1 == com2) ? "Sim" : "Nao") << endl;
	cout << ((com1 != com2) ? "Sim" : "Nao") << endl;

	return 0;
}