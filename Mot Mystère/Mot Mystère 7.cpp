#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	srand(time(0));
	cout << "Le mot Mystere !" << endl << "Retrouvez un mot a partir de ses lettres melangees" << endl;
	system("pause");
	string onContinue("o");
	ifstream fichierDico("dico.txt");
	string mot;
	if (!fichierDico)
	{
		cout << "Le fichier dico.txt est vide ou n'a pas ete trouve." << endl;
		system("pause");
	}

	else
	{
		vector <string> dico(1);
		string motDuDico;
		string motMelange("");
		string listeLettre("");
		string reponse;
		int essai(1);
		unsigned int nbAleatoire;
		while (getline(fichierDico, motDuDico))
		{
			dico.push_back(motDuDico);
		}

		do
		{
			essai = 1;
			motMelange = "";
			nbAleatoire = rand() % dico.size();
			mot = dico[nbAleatoire];
			listeLettre = mot;
			while (listeLettre.size() != 0)
			{
				nbAleatoire = rand() % listeLettre.size();
				motMelange += listeLettre[nbAleatoire];
				listeLettre.erase(nbAleatoire, 1);
			}

			cout << "Le mot a trouver contient les lettres : " << motMelange << endl << endl << "Vous avez droit a 5 essais" << endl;
			while (essai <= 5 && reponse != mot)
			{
				cout << "Quelle est votre proposition ?" << endl;
				cin >> reponse;
				if (reponse == mot)
				{
					cout << "Bravo !" << endl;
				}
				else
				{
					cout << "Mauvaise reponse" << endl;
					essai++;
				}
			}

			if (essai > 5)
			{
				cout << "Perdu !" << endl;
			}

			
			cout << "Voulez-vous refaire une nouvelle partie ? (o/n)" << endl;
			cin >> onContinue;
			cout << endl;
			while (onContinue != "o" && onContinue != "O" && onContinue != "n" && onContinue != "N")
			{
				cout << "Veuillez repondre par o ou n" << endl;
				cin >> onContinue;
				cout << endl;
			}

		} while (onContinue == "o" || onContinue == "O");
		cout << "Merci d'avoir joue a mon jeu. A bientot" << endl;
	}
	system("pause");
	return 0;
}