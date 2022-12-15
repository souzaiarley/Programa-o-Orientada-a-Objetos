#include <iostream>
#include "complexo.h"

using namespace std;

Complexo::Complexo(double real, double imaginario)
	: real(real), imaginario(imaginario){}

Complexo Complexo::operator+(Complexo &num2){
	return Complexo(real + num2.real, imaginario + num2.imaginario);
}

Complexo Complexo::operator-(Complexo &num2){
	return Complexo(real - num2.real, imaginario - num2.imaginario);
}

Complexo Complexo::operator*(Complexo &num2){
	return Complexo(real * num2.real, imaginario * num2.imaginario);
}

bool Complexo::operator==(Complexo &num2){
	return (((real == num2.real) && (imaginario == num2.imaginario)) ? true : false);
}

bool Complexo::operator!=(Complexo &num2){
	return (!((real == num2.real) && (imaginario == num2.imaginario)) ? true : false);
}

void Complexo::print(){
	cout << '(' << real << ", "  << imaginario << ')' << endl;
}