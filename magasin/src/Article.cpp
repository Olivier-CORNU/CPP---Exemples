#include "Article.h"

Article::Article(int numero, string designation, double prixHT)
{
    this->numero = numero;
    this->designation = designation;
    this->prixHT = prixHT;
}

Article::~Article()
{
    cout << "L'article " << this->GetDesignation() << "a bien été détruit." << endl;
}

int GetNumero()
{
    return numero;
}

void SetNumero(int val)
{
    numero = val;
}

string GetDesignation()
{
    return designation;
}

void SetDesignation(string val)
{
    designation = val;
}

double GetPrixHT()
{
    return prixHT;
}

void SetPrixHT(double val)
{
    prixHT = val;
}

void Infos()
{
    cout << "numéro du produit : " << this->GetNumero() << endl
    << "Dégination : " << this->GetDesignation() << endl
    << "Prix HT : " << this->GetPrixHT() << endl;
}
