#include "compte.h"
#include "compteEpargne.h"
#include <iostream>
using namespace std;
int main(){
	compte c1;
	compte c2;
    compteEpargne c3("manita ",12);
 	c1.ajout(233);
 	c1.retire(33);
 	 c1.affiche();
 	cout<<"le solde est "<<c1.solde()<<endl;

 	c2.ajout(550);
 	c2.retire(50);
 	c2.affiche();
 	cout<<"le solde est "<<c2.solde()<<endl;

    c3.ajout(100);
 	c3.retire(50);
 	c3.compteEpargne::affiche();
 	cout<<"le solde est "<<c3.solde()<<endl;

 	}
