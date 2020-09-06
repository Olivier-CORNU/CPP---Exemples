#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED/*

int ajouteDeux(int nombreRecu);*/

class vehicule
{
public:
	vehicule(int prix);
	virtual void affiche() const;
	virtual int nbRoues() const = 0;
	virtual ~vehicule();

protected:
	int m_prix;
};

class voiture : public vehicule
{
public:
	voiture(int prix, int nbPortes);
	virtual void affiche() const;
	virtual int nbRoues() const;
	virtual ~voiture();

private:
	int m_portes;
};

class moto : public vehicule
{
public:
	moto(int prix, double vitesse);
	virtual void affiche() const;
	virtual int nbRoues() const;
	virtual ~moto();

private:
	double m_vitesse;
};

#endif // MATH_H_INCLUDED

