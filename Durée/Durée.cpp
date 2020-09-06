#include <iostream>
#include <string>
#include "duree.h"

using namespace std;

int main()
{
	Duree duree1(0, 10, 28), duree2(0, 15, 2);
	
	if (duree1 == duree2)
	{
		cout << "Les deux durées sont égales." << endl;
	}
	else
	{
		cout << "Les deux durées sont différentes." << endl;
	}

	if (duree1 != duree2)
	{
		cout << "Les deux durées sont différentes." << endl;
	}
	else
	{
		cout << "Les deux durées sont égales." << endl;
	}

	if (duree1 < duree2)
	{
		cout << " La première durée est la plus courte" << endl;
	}
	else
	{
		cout << "Merde !" << endl;
	}
}

bool operator==(Duree const& a, Duree const& b)
{
	return a.estEgal(b);
}

bool operator<(Duree const& a, Duree const& b)
{
	return a.estPlusPetitQue(b);
}
