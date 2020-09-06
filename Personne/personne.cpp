#include "personne.h"
using namespace std;

void Personne::setNom(string vNom)
{
    nom = vNom;
}

string Personne::getNom()
{
    return nom;
}

void Personne::setSexe(char vSexe)
{
    sexe = vSexe;
}

char Personne::getSexe()
{
    return toupper(sexe);
}

void Personne::setAge(int vAge)
{
    age = vAge;
}

int Personne::getAge()
{
    return age;
}

void Personne::affiche()
{
    if (getSexe() == 'M')
        cout << "Monsieur ";
    else if (getSexe() == 'F')
        cout << "Madame ";
    cout << getNom() << " a " << getAge() << " ans."  << endl;
}

Personne::Personne(string vNom, char vSexe, int vAge)
{
    nom = vNom;
    age = vAge;
    sexe = vSexe;

}

Personne::Personne()
{
    nom = "";
    age = 0;
    sexe = 'F';
}
