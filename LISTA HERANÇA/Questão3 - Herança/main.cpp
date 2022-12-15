/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include <iomanip>
#include "caminhao.h"

using namespace std;

int main (){
    Caminhao *c = new Caminhao(8000, 100, 100000, 6, 100, 8, 4, 12);
    c->printCaminhao();

    return 0;
}