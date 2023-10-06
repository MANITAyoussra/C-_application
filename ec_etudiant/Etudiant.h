#ifndef ETUDIANT_H
#define ETUDIANT_H
class Etudiant{
	public:
		public :
		int code ;
		char name ;
		int nbrNotes;
		float *tabNotes;
		Etudiant();
		Etudiant(int c, char s,int n, float*tab);
		get_code();
		set_code(int c);
		get_name();
		set_name(char c);
		get_nbrNotes();
		set_nbrNotes(int n);
        ~Etudiant ();
        void saisie ();
        void affichage () ;
        float moyenne () ;
        bool admis () ;
        bool comparer();
        };
#endif



