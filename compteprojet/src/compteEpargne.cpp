#include "compteEpargne.h"
#include"compte.h"
#include <iostream>
#include<string>
using namespace std;
compteEpargne::compteEpargne():compte(),nom("name"),taux(0){};

compteEpargne::compteEpargne(string  a , double t):compte(),nom(a),taux(t){};


void compteEpargne::affiche(){
    cout<<"nom="<<nom <<endl;
    cout<<"credit="<<credit<<endl;
	cout<<"debit="<<debit<<endl;


}
double  compteEpargne::interet(){
	    return(solde()*taux);


};
double  compteEpargne::update(){
	    return(credit+interet());


};
