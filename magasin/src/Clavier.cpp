#include "Clavier.h"

Clavier::Clavier(int numero, string designation, double prixHT, int nbTouches)
            :Article(numero, designation, prixHT)
{
    this->nbTouches = nbTouches;
}

Clavier::~Clavier()
{
    cout << "Le clavier " << this->GetDesignation() << "a bien été détruit." << endl;
}

int GetNbTouches()
{
    return nbTouches;
}

void SetNbTouches(int val)
{
    nbTouches = val;
}

void Infos()
{
    Article::Infos();
    cout << "Nombre de touches : " << this->GetNbTouches() << endl;
}
