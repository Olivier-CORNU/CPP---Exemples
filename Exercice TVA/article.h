#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED
#include <string>
using namespace std;

class article
{
    private:
        string nom;
        double prixHT;
        double prixTTC;
        static float TVA;

    public:
        article();
        article(string, double);
        string getNom();
        void setNom(string);
        double getPrixHT();
        void setPrixHT(double);
        double getPrixTTC();
        void setPrixTTC(double);
        void infos();
};



#endif // ARTICLE_H_INCLUDED
