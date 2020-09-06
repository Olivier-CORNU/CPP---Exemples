#include <iostream>
#include "duree.h"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes),
{
	
}

bool Duree::estEgal(Duree const& b) const
{
	return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::estPlusPetitQue(Duree const& b) const
{
	if (m_heures < b.m_heures) { return true; }
	else if (m_heures > b.m_heures) { return false; }
	else if (m_heures == b.m_heures)
	{
		if (m_minutes < b.m_minutes) { return true; }
		else if (m_minutes > b.m_minutes) { return false; }
		else if (m_minutes == b.m_minutes)
		{
			if (m_secondes < b.m_secondes) { return true; }
			else { return false; }
		}
	}
}