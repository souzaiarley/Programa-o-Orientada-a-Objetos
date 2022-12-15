/*
Nome: Antonio Joabe Alves Morais / Iarley Natã Lopes Souza
Matrícula: 539029 / 535779
Curso: C.C.
*/

#include <iostream>
#include <string>

using namespace std;

class GradeBook {
	public:
		GradeBook(string, string);
		// Sets
		void setCourseName(string);
		void setProfName(string);
		// Gets
		string getCourseName();
		string getProfName();
		// Método
		void displayMessage();
	private:
		string courseName, profName;
};