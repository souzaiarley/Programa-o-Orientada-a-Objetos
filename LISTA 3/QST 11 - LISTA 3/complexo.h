#include <iostream>

using namespace std;

class Complexo {
	private:
		double real, imaginario;
		
	public:
		Complexo(double = 0, double = 0);

		Complexo operator+(Complexo &);
		Complexo operator-(Complexo &);
		Complexo operator*(Complexo &);

		bool operator==(Complexo &);
		bool operator!=(Complexo &);

		void print();
	
};