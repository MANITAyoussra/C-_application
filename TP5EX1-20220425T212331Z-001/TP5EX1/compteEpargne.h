#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "compte.h";

class CompteEpargne: public compte
{
    char* nom;
    double taux;
public:
    CompteEpargne(int=0,double=0.0, double=0.0,char* ="",double=0.0);
    void affiche();
    double interet();
    void update();
};

#endif // COMPTEEPARGNE_H
