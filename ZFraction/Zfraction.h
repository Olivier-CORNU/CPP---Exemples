#ifndef DEF_ZFRACTION
#define DEF_ZFRACTION

#include <iostream>

class ZFraction
{
public :
	
	ZFraction(int numerateur, int denominateur);
	ZFraction(int entier);
	ZFraction();
	ZFraction& operator+=(ZFraction const& zfraction);
	ZFraction& operator*=(ZFraction const& zfraction);
	void Afficher(std::ostream& out) const;
	bool estEgal(ZFraction const& b) const;
	bool estPlusPetitQue(ZFraction const& b) const;

private :

	int m_numerateur;
	int m_denominateur;

};

int pgcd(int a, int b);
std::ostream& operator<<(std::ostream& out, ZFraction const zfraction);
ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);
bool operator<(ZFraction const& a, ZFraction const& b);
bool operator==(ZFraction const& a, ZFraction const& b);

#endif