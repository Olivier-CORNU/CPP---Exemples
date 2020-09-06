#include <iostream>
#include "article.h"

using namespace std;

int main()
{
    article Cocaine("Cocaine", 456);
    article Heroine;
        Heroine.setNom("Heroine");
        Heroine.setPrixHT(256);
        Heroine.setPrixTTC(Heroine.getPrixHT());

    Cocaine.infos();
    Heroine.infos();
    return 0;
}
