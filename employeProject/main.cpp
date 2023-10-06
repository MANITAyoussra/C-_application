#include <iostream>
#include"emplyee.h"
#include"responsable.h"
#include<vector>
#include<string>

using namespace std;
int main(){
emplyee e1("noour",200,1.2);
emplyee e2("mphamed",300,1.5);
emplyee e3("youssra",415,2);
emplyee e4("saiffedine ",411,1.4);
emplyee e5("wassim",250,1.8);
emplyee e6("marwa ",500,1.7);
responsable r1("Jacob",700,2.9);
responsable r2("Ritta",150,3.1);
r1.inferieurs.push_back(e1);
r1.inferieurs.push_back(e2);
r1.inferieurs.push_back(e6);
r2.inferieurs.push_back(e3);
r2.inferieurs.push_back(e4);
r2.inferieurs.push_back(e5);
r1.affichageInferieurs();
r2.affichageInferieurs();
double salaireTotal=r1.calculSalaireEquipe()+r2.calculSalaireEquipe();
cout<<"Salaire total a verser = "<<salaireTotal;
return 0;
}

