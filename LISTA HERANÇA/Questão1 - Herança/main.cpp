/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include <string>
#include "restaurante.h"

using namespace std;

int main (){
    Restaurante *restaurante = new Restaurante("Burger King", "Rua 1", "Fortaleza", 
    "Ceara", 60341021, 985548412, "fast food", 32.50);

    restaurante->printRestaurante();
    
    return 0;
}