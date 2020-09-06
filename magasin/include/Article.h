#ifndef ARTICLE_H
#define ARTICLE_H


class Article
{
    public:
        Article( int=0, string="Produit indéfini", prixHT=0);
        ~Article();

        int GetNumero();
        void SetNumero(int val);
        string GetDesignation();
        void SetDesignation(string val);
        double GetPrixHT();
        void SetPrixHT();
        void Infos();

    protected:

    private:
        int numero;
        string designation;
        double prixHT;
};

#endif // ARTICLE_H
