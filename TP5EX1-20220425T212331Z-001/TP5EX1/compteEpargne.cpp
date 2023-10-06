#include "compteEpargne.h"


CompteEpargne::CompteEpargne(int ID, double debit, double credit, char* nom, double taux):compte(ID,debit,credit)
{

    //compte(ID,debit,credit);
    this->nom=nom;
    this->taux=taux;
}



void CompteEpargne::affiche()
{
    compte::affiche();
    cout<<"nom:"<<nom<<endl;
    cout<<"taux:"<<taux<<endl;

}
double CompteEpargne::interet()
{
    return solde()*taux;
}
void CompteEpargne::update()
{
    //setc(getc()+interet());
    credit+=interet();
}
