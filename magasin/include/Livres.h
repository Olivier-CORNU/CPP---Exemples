#ifndef LIVRES_H
#define LIVRES_H

#include <Article.h>


class Livres : public Article
{
    public:
        Livres(int=0, string="Produit indéfini", int=0, int=0);
        virtual ~Livres();

        string GetAuteur();
        void SetAuteur(string val);
        void Infos();

    protected:

    private:
        string auteur;
};

#endif // LIVRES_H
