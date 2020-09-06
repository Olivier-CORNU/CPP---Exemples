#include "article.h"
#include <iostream>
using namespace std;

article::article()
{
    nom = "NC";
    prixHT = 0;
    prixTTC = ( 1 + ( article::TVA / 100 ) ) * prixHT;
}

article::article(string vNom, double vPrixHT)
{
    if ( vNom.length() <= 30 )
        nom = vNom;
    else
        nom = "NC";
    prixHT = vPrixHT;
    prixTTC = ( 1 + ( article::TVA / 100 ) ) * prixHT;
}

float article::TVA = 20;

void article::setNom(string vNom)
{
    if ( vNom.length() <= 30 )
        nom = vNom;
    else
        nom = "NC";
}

string article::getNom()
{
    return nom;
}

void article::setPrixHT(double vPrixHT)
{
    prixHT = vPrixHT;
}

double article::getPrixHT()
{
    return prixHT;
}

void article::setPrixTTC(double vPrixHT)
{
    prixTTC = ( 1 + ( TVA / 100 ) ) * vPrixHT;
}

double article::getPrixTTC()
{
    return prixTTC;
}

void article::infos()
{
    cout << "Article : " << getNom() << endl
    << "Prix HT : " << getPrixHT() << " euros" << endl
    << "Montant TVA : " << getPrixHT() * article::TVA /100 << endl
    << "Prix TTC : " << this->getPrixTTC() << " euros" << endl;
}
