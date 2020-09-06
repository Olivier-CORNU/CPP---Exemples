#ifndef DEF_DUREE
#define DEF_DUREE

class Duree
{
public:

	Duree(int heures = 0, int minutes = 0, int secondes = 0);
	bool estEgal;
	bool estPlusPetitQue;

private:

	int m_heures;
	int m_minutes;
	int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);

bool operator!=(Duree const& a, Duree const& b)
{
	return !(a == b); //On utilise l'opérateur == qu'on a défini précédemment !
}

bool operator <(Duree const& a, Duree const& b);

#endif
