#ifndef ARTICLE_H
#define ARTICLE_H
#include<string>

class Article
{     private:
         int Ref;
         string libelle;
         int qte;
         double prix ;

    public:
        Article();
        Article(int r, string s, int Q ,double p );
        void Getprix();
        void affiche();
        void Setprix(double d);
        Article operator+(Article& a);



};

#endif
