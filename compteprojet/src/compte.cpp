#include "compte.h"
#include <iostream>
using namespace std;
int compte::id=0;

compte::compte(){
this->credit=0;
this->debit=0;
this->num=++id;
}

void compte::ajout(double d) {
	debit=debit+d;
}
void compte::retire(double r){
	debit=debit-r;

}
double compte::solde(){
     return(debit-credit);
}
void compte::affiche(){
	//cout<<"id="<<this->num<<endl;
	//cout<<"credit="<<this->credit<<endl;
	//cout<<"debit="<<this->debit<<endl;
}
