#include "math.h"

/*int ajouteDeux(int nombreRecu)
{
	int valeur(nombreRecu + 2);

	return valeur;
}*/

vehicule::vehicule(int prix) : m_prix(prix)
{

}

void vehicule::affiche() const
{
	cout << "Ceci est un véhicule coutant " << m_prix << "." << endl;
}

vehicule::~vehicule()
{

}

voiture::voiture(int prix, int nbPortes) : vehicule(prix), m_portes(nbPortes)
{

}

void voiture::affiche() const
{
	cout << "Ceci est une voiture coutant " << m_prix << ", contenant " << m_portes << " portes et avec " << nbRoues() << " roues." << endl;
}

int voiture::nbRoues()
{
	return 4;
}

voiture::~voiture()
{

}

moto::moto(int prix, double vitesse) : vehicule(prix), m_vitesse(vitesse)
{

}

void moto::affiche() const
{
	cout << "Ceci est une moto coutant " << m_prix << " et allant a " << m_vitesse << " km/h et avec " << nbRoues() << " roues." << endl;
}

int moto::nbRoues()
{
	return 2;
}

moto::~moto()
{

}