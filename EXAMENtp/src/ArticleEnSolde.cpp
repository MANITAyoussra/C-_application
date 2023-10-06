#include<iostream>
#include "ArticleEnSolde.h"
#include "Article.h"
#include<string>
using namespace std;

ArticleEnSolde::ArticleEnSolde():Article(),pourcentage(0){
}
void ArticleEnSolde::SetRemise(int r){this->pourcentage=r;
	};
ArticleEnSolde::ArticleEnSolde(int R,string L,int Q,double P,double pour):Article(R,L,Q,P),pourcentage(pour){
	}

double ArticleEnSolde::GetPrix(){
	return this->prix*(1- this->pourcentage);
}
void ArticleEnSolde::Affiche(){
	cout<<" le prix d'origine est : "<<this->GetPrix<<" et le prix apres remise est: "<<this->GetPrix()<<endl;
}
ArticleEnSolde ArticleEnSolde::operator+(ArticleEnSolde& a){
	ArticleEnSolde r;
	r.libelle = this->libelle + a.libelle;
	r.qte = this->qte + a.qte;
	r.SetPrix((double)((a.prix* a.qte)+(this->prix* this->qte))/(r.qte));
	r.pourcentage = (double)(this->pourcentage + a.pourcentage)/2;
	return r;
}
