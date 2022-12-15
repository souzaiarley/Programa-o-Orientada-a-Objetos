/*
Nome: Antonio Joabe Alves Morais / Iarley Natã Lopes Souza
Matrícula: 539029 / 535779
Curso: C.C.
*/

#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

int main() {
	GradeBook gradeBook1("BCC221 - POO", "Tiago Werlley");
	GradeBook gradeBook2("BCC202 - AED's I", "Atilio Gomes");

	cout << "gradeBook1: \n";
	gradeBook1.displayMessage();
	cout << "\ngradeBook2: \n";
	gradeBook2.displayMessage();

	return 0;
}