#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <iostream>
using namespace std;

class Personne
{
    private:
        string nom;
        char sexe;
        int age;

    public:
        Personne (string, char, int);
        Personne ();
        void setNom(string);
        string getNom();
        void setSexe(char);
        char getSexe();
        void setAge(int);
        int getAge();
        void affiche();
};



#endif // PERSONNE_H_INCLUDED
