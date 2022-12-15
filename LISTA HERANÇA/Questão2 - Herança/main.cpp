/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include <string>
#include "carropasseio.h"

using namespace std;

int main (){
    CarroPasseio *veiculo = new CarroPasseio(900, 180, 120000, 4, 100, "Sedan", "Prata");
    veiculo->printCarroPasseio();
    
    return 0;
}