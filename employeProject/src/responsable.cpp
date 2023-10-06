#include "responsable.h"
#include<emplyee.h>
#include<vector>
#include<string>
#include <stdlib.h>
using namespace std;

double emplyee::valeur=500;

responsable::responsable():emplyee(){};
responsable::responsable(string n,int mat, double i):emplyee(n,mat,i){};
void responsable::affichageInferieurs(){
     cout<<"Inferieurs du responsable "<<nom;
    for(int i=0;i<inferieurs.size();i++){
     inferieurs[i].affiche();}
}

double responsable::calculSalaireEquipe(){
   double somme=this->calcul();
    int i=0
    for(int i;i< inferieurs.size();i++){
     somme+=inferieurs[i].calcul();}
return(somme);
}
