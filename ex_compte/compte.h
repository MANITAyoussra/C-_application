#ifndef COMPTE_H
#define COMPTE_H
class compte
{public:
    int get_code();
    float get_solde();
    compte();
    compte(float s);
    void affiche_solde();
    void affiche_code();
    float deposer(float montant);
    float retirer(float montant);
private:
    float solde ;
    static int code ;
};
#endif
