#include "Livres.h"

Livres::Livres(int numero, string designation, int prixHT, string auteur)
        :Article(numero, designation, prixHT)
{
    this->auteur = auteur;
}

Livres::~Livres()
{
    cout << "Le livre " << this->GetDesignation() << "a bien été détruit." << endl;
}

string GetAuteur()
{
    return auteur;
}

void SetAuteur(string val)
{
    this->auteur = val
}
void Infos()
{
    Article::Infos();
    cout << "Auteur : " << this->GetNbTouches() << endl;
}
