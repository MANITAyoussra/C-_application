#include "compte.h"

compte::compte(int ID, double debit, double credit)
{
    this ->ID=ID;
    this -> debit=debit;
    this-> credit=credit;
}
void compte::affiche()
{
    cout<<" ID:"<<ID<<endl;
    cout<<"Debit:"<<debit<<endl;
    cout<<"Credit:"<<credit<<endl;
}
void compte::ajout(double S)
{
    credit+=S;
}
void compte::retirer(double S)
{
    debit-=S;
}

double compte::solde()
{
    return credit-debit;
}
double compte::getc()
{
    return (this->credit);
}
void compte::setc(double credit)
{
    this->credit=credit;
}
