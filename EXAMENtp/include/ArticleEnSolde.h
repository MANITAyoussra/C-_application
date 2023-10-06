#ifndef ARTICLEENSOLDE_H
#define ARTICLEENSOLDE_H
#include"Article.h"
#include<string>
using namespace std;
class ArticleEnSolde : public Article
{
	private :
		double pourcentage;
	public:
		void SetRemise(int r);
		ArticleEnSolde(int R,string L,int Q,double P,double pour);
        ArticleEnSolde();
		double GetPrix();
		void Affiche();
		ArticleEnSolde operator+(ArticleEnSolde& a);
};
#endif
