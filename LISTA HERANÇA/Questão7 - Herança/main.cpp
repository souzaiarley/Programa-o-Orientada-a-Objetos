/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include "monitor.h"
using namespace std;

int main (){
    Monitor *monitor1 = new Monitor("Iarley", "353779", "CC", "Iarley", 400, "Tarde", "FUP", "10h");
    monitor1->printMonitor();

    return 0;
}