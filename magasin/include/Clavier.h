#ifndef CLAVIER_H
#define CLAVIER_H

#include <Article.h>


class Clavier : public Article
{
    public:
        Clavier(int=0, string="Produit indéfini", double=0, int=0);
        ~Clavier();

        int GetNbTouches();
        void SetNbTouches(int val);
        void Infos();

    protected:

    private:
        int nbTouches;
};

#endif // CLAVIER_H
