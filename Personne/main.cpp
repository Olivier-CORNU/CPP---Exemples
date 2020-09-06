#include <iostream>
#include "personne.h"

using namespace std;

int main()
{
    Personne moi;

    moi.setNom("Olivier");
    moi.setSexe('m');
    moi.setAge(37);

    moi.affiche();

    return 0;
}
