#ifndef COMPTE_H
#define COMPTE_H


# include <iostream>
using namespace std;
class compte
{
protected :
    int ID;
    double debit,credit;//private par defaut
public:
    compte(int ID=0, double=0.0,double= 0.0);
    void affiche();
    void ajout(double);
    void retirer (double);
    double solde();
    double getc();
    void setc(double);
};


#endif // COMPTE_H
