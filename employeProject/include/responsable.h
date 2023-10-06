#ifndef RESPONSABLE_H
#define RESPONSABLE_H
#include<vector>
#include <emplyee.h>
#include<string>
using namespace std;


class responsable : public emplyee
{
   public:
   vector<emplyee> inferieurs;
   responsable();
   responsable(string n,int mat, double i);
   void affichageInferieurs();
   double calculSalaireEquipe();

};

#endif
