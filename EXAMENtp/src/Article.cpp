#include "Article.h"
#include<string>
using namespace std;

Article::Article(int r, string s, int Q ,double p ): Ref(r),libelle(s),Q(qte),prix(p){};
Article::Article(){
    Ref=0;
    libelle="";
    qte=0;
    prix=0.0;
}
void Article::affiche(){

      cout<<"le prix  est :"<<GetPrix<<endl;
      };

double Article::GetPrix(){
    return(prix);}
void Article::Setprix(double d ){
    prix=d;
}

Article Article::opertaor+(Article& a){
	Article r;
	r.libelle = this->libelle + a.libelle;
	r.qte = this->qte + a.qte;
	r.SetPrix((double)((a.prix* a.qte)+(this->prix* this->qte))/(r.qte));
	r.pourcentage = (double)(this->pourcentage + a.pourcentage)/2;
	return r;

}
