#ifndef COMPTE_H
#define COMPTE_H

class compte
{
	public:
		int static id;
		compte();
		void affiche();
		void ajout(double d);
		void retire(double r);
		double solde();

	protected :
		   int num ;
           double debit ,credit;
} ;

#endif
