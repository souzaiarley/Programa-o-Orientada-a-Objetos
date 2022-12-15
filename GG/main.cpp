#include "iostream"
#include "animal.h"
#include "ave.h"
#include "mamifero.h"
#include "peixe.h"
#include "reptil.h"
#include "canguru.h"
#include "cachorro.h"
#include "cobra.h"
#include "turtle.h"
#include "goldfish.h"
#include "arara.h"

using namespace std;

int main (){
    Mamifero *m = new Mamifero();
    Cachorro *cachorro = new Cachorro();
   
    string str = "vai apanhar";
    int um = 2;
    float dois = 12.5;
    int tres = 17;
    float quatro = 4.5;
    cachorro->reagir(um, dois);
    cachorro->reagir(tres, quatro);
    
    return 0;
}