#include "Etudiant.h"
#include <iostream>
using namespace std;
int main (){
 Etudiant E1;
 Etudiant E2;
 Etudiant E3;
 Etudiant E4;
 Etudiant E5;
 E1.saisie();
 E2.saisie();
 E3.saisie();
 E4.saisie();
 E5.saisie();
 E1.affichage();
 E3.affichage();
 E2.affichage();
 E4.affichage();
 E5.affichage();
 E1.moyenne();
 E3.moyenne();
 E2.moyenne();
 E4.moyenne();
 E5.moyenne();
 if (E1.admis()){cout<<E1.name<<endl;}
 if (E2.admis()) {cout<<E2.name<<endl;}
 if (E3.admis()){cout<<E3.name<<endl;}
 if (E4.admis()) {cout<<E4.name<<endl;}
 if (E5.admis()) {cout<<E5.name<<endl;}
}
