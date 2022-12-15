/*
Nome: Antonio Joabe Alves Morais / Iarley Natã Lopes Souza
Matrícula: 539029 / 535779
Curso: C.C.
*/

#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string courseName, string profName) {
	setCourseName(courseName);
	setProfName(profName);
}

// Gets
string GradeBook::getCourseName() { return this->courseName; }
string GradeBook::getProfName() { return this->profName; }

// Sets
void GradeBook::setCourseName(string courseName) { this->courseName = courseName; }
void GradeBook::setProfName(string profName) { this->profName = profName; }

// Métodos
void GradeBook::displayMessage() {
	cout << "Welcome to the grade book for " << getCourseName()
	 << ", ministered by: " << getProfName() << endl;
}