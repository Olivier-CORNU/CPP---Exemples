#include<iostream>
#include "Zfraction.h"

using namespace std;

ZFraction::ZFraction(int numerateur, int denominateur) : m_numerateur(numerateur), m_denominateur(denominateur)
{
	
}

ZFraction::ZFraction(int entier) : m_numerateur(entier), m_denominateur(1)
{
}

ZFraction::ZFraction() : m_numerateur(0), m_denominateur(1)
{
}

int pgcd(int a, int b)
{
	while (b != 0)
	{
		const int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

ZFraction& ZFraction::operator+=(const ZFraction &zfraction2)
{
	m_numerateur *= zfraction2.m_denominateur;
	int copie(zfraction2.m_numerateur);
	copie *= m_denominateur;
	m_numerateur += zfraction2.m_numerateur;
	m_denominateur *= zfraction2.m_denominateur;
	int commun = pgcd(m_numerateur, m_denominateur);
	m_numerateur /= commun;
	m_denominateur /= commun;

	return *this;
}

ZFraction& ZFraction::operator*=(const ZFraction& zfraction2)
{
	m_numerateur *= zfraction2.m_numerateur;
	m_denominateur *= zfraction2.m_denominateur;
	int commun = pgcd(m_numerateur, m_denominateur);
	m_numerateur /= commun;
	m_denominateur /= commun;

	return *this;
}

bool ZFraction::estEgal(ZFraction const& b) const
{
	int numerateura(m_numerateur);
	numerateura *= b.m_denominateur;
	int numerateurb(b.m_numerateur);
	numerateurb *= m_denominateur;
	if (numerateura == numerateurb) { return true; }
	else { return false; }
}

bool ZFraction::estPlusPetitQue(ZFraction const& b) const
{
	int numerateura(m_numerateur);
	numerateura *= b.m_denominateur;
	int numerateurb(b.m_numerateur);
	numerateurb *= m_denominateur;
	if (numerateura < numerateurb) { return true; }
	else { return false; }
}

void ZFraction::Afficher(ostream &out) const
{
	out << m_numerateur << "/" << m_denominateur;
}

ZFraction operator+(ZFraction const a, ZFraction const b)
{
	ZFraction copie(a);
	copie += b;
	return copie;
}

ZFraction operator*(ZFraction const a, ZFraction const b)
{
	ZFraction copie(a);
	copie *= b;
	return copie;
}

ostream& operator<<(ostream& out, ZFraction const& zfraction)
{
	zfraction.Afficher(out);
	return out;
}

bool operator<(ZFraction const a, ZFraction const b)
{
	return a.estPlusPetitQue(b);
}

bool operator==(ZFraction const a, ZFraction const b)
{
	return a.estEgal(b);
}