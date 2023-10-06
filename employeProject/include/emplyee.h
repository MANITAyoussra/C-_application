#ifndef EMPLYEE_H
#define EMPLYEE_H
#include<string>
using namespace std ;

class emplyee
{
   protected:
     string nom;
     int matricule;
     double indiceSalarial;
   public:
    static double valeur;
    emplyee();
    emplyee(string n, int mat, double indice);
    void affiche();
    double calcul();

};


#endif
