#include "compte.h"
#include <iostream>
using namespace std;
int main (){
    compte C1;
    C1.affiche_code();
    compte C2(200);
    C2.affiche_code();
    compte C3(220);
     C3.affiche_code();
    C1.deposer(23);
    C2.deposer(3);
    C3.deposer(2);

    C1.retirer(9);
    C2.retirer(6);
    C3.retirer(56);

    C1.affiche_solde();
    C2.affiche_solde();
    C3.affiche_solde();




    return 0;
}
