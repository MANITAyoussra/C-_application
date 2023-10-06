#include "compte.h"
#include <iostream>
using namespace std;
     int compte::code=0;
    float compte::get_solde(){
        return solde ;
    }
    int compte::get_code(){
        return code ;
    }
    compte::compte(){
     solde=0;
     code++;
    }
    compte::compte(float s ){
         solde=s;
         code++;

    }
    void compte::affiche_solde(){
        cout<<"le solde est"<<get_solde()<<endl;
    }
    void compte::affiche_code()
    {
       cout<<"le code est"<<get_code()<<endl;
    }
    float compte::deposer(float montant){
        solde=solde+montant;
        return(solde);
    }
    float compte::retirer(float montant){
        solde=solde-montant;
        return(solde);
    }
