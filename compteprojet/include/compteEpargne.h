#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include"compte.h"
#include<string>
using namespace std ;
class compteEpargne : public compte
{
	public:
		compteEpargne();
  		compteEpargne(string a,double t);
		void affiche();
		double interet();
		double update();
	protected:
		string nom;
		double taux;
		compte tab=new compte

};

#endif

