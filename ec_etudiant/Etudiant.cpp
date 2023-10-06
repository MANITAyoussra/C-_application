#include<iostream>
#include"Etudiant.h"
using namespace std ;
 public:
Etudiant::Etudiant(){
};
 Etudiant:: Etudiant(int c,char s,int n, int* tab){
 	code=c;
 	s=name;
 	n=nbrNotes;
 	tab=tabNotes;
 }
 void Etudiant::get_code(){
 	return code;
 }
 void Etudiant::get_name(){
 	return name;
 }

 void Etudiant::get_nbrNotes(){
 	return nbrNotes;
 }
 void Etudiant::get_tabNotes(){
 	return tabNotes;
 }
 int Etudiant::set_code(int c){
  code=c;
 }
 int Etudiant::set_name(char s){
  name=s;
 }
 int Etudiant::set_nbrNotes(int c){
  nbrNotes=c;
 }
 Etudiant::~Etudiant(){
     cou<<"destructeur"<<endl;;
 }
 void Etudiant:: saisie (){
  for(int=0;i<nbrNotes;i++){
    cin>>tabNotes[i];
  }
 }
 void Etudiant::affichage (){
   cout<<"le nom est "<<name<<" le code est "<<code<< "le nbre des notes "<<nbrNotes<<endl;
   for(int=0;i<nbrNotes;i++){
    cout<<"la note est "<<tabNotes[i]<<endl;
 }
float Etudiant::moyenne () {
    for(int=0;i<nbrNotes;i++){
        float s=0;
        s=s+tabNotes[i];}
    float moy=s/nbrNotes;
    cout<<" la moyenne est : "<<moy<<endl;
    return(moy);
 }
 bool Etdudiant ::admis () {
     if ( moyenne()>10 ) return (true);
       else return false ;
 }
 bool Etudiant::comparer(){
     }


