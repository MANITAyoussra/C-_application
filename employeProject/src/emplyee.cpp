#include "emplyee.h"
#include <iostream>
#include<string>
#include<vector>

using namespace std;

emplyee::emplyee():nom(""),matricule(0),indiceSalarial(0){};
emplyee::emplyee(string a,int m, double  d): nom(a),matricule(m),
indiceSalarial(d) {}

void emplyee::affiche(){
	cout<<"nom="<<nom<<endl;
	cout<<"matricule="<<matricule<<endl;
	cout<<"indice_salarial="<<indiceSalarial<<endl;
}
double emplyee::calcul(){
	return(indiceSalarial*valeur);

}
