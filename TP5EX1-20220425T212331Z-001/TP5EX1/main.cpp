#include <iostream>

using namespace std;

#include "CompteEpargne.h"

int main()
{
    CompteEpargne client(100,0.0,1000.0,"nom",0.025);

    client.affiche();
    //client.affiche();
    client.ajout(5000);
    client.retirer(2000);
    client.affiche();

    cout<<"interet:"<<client.interet()<<endl;
    cout<<"nouveau solde:"<<client.solde()<<endl;

    return 0;
}
