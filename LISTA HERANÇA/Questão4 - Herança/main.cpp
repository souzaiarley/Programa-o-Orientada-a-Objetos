/*  Nome: Iarley Natã Lopes Souza
    Matrícula: 535779
    Curso: CC
*/

#include <iostream>
#include <iomanip>
#include "overnight.h"
#include "doisdias.h"

using namespace std;

int main (){
    Pacote *pacote0 = new Pacote("Pedro", "Rua Q", "Fortaleza", "Ceara", "60341025", 
    "Jose", "Rua Y", "Recife", "Pernambuco", "50342059", 5, 20);

    PacoteDoisDias *pacote1 = new PacoteDoisDias("Pedro", "Rua Q", "Fortaleza", "Ceara", "60341025", 
    "Jose", "Rua Y", "Recife", "Pernambuco", "50342059", 5, 20, 6);

    PacoteOverNight *pacote2 = new PacoteOverNight("Pedro", "Rua Q", "Fortaleza", "Ceara", "60341025", 
    "Jose", "Rua Y", "Recife", "Pernambuco", "50342059", 5, 20, 6);

    cout << "==========================" << endl;
    cout << "Custo(Padrao): R$" << fixed << setprecision(2) << pacote0->calculaCusto() << endl;
    cout << "Custo(Dois Dias): R$" << fixed << setprecision(2) << pacote1->calculaCustoDois() << endl;
    cout << "Custo(overnight): R$" << fixed << setprecision(2) << pacote2->calculaCustoOV() << endl;
    cout << "==========================" << endl;

    return 0;
}