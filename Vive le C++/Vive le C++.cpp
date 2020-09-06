// Vive le C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include "math.h"
#include <vector>
#include <fstream>
using namespace std;


/*int ajouterDeux(int nombreA)
{
	int resultat(nombreA + 2);
	return resultat;
}*/

int addition(int premier, int deuxieme)
{
	int resultat(premier + deuxieme);
	return resultat;
}


int main()
{
	int monAge(37);
	int& monVraiAge(monAge);
	string maPhrase("J'ai ");
	cout << maPhrase << monVraiAge << " ans" << endl;
	cout << "Hello World!" << "\n";
	cout << "Comment vas-tu World ?" <<"\n";
	cout << "Alors comme ça les accents ça ne paísse pas !" << "\n" << endl << endl;
	/*int sonAge(0);
	cout << "Et toi, c'est quoi ton âge ?" << endl;
	cin >> sonAge;
	cout << "Ah bon, tu as " << sonAge << " ans ?" << endl;
	cout << "Et ton nom ?" << endl;
	string sonNom("");
	cin >> sonNom;
	cout << "Enchanté " << sonNom << " !" << endl << endl;
	cout << "Comment vous vous appelez ?" << endl;
	string sonNom2("");
	double sonPi2(0);
	cin >> sonNom2;
	cout << "Et d'après vous, combien vaut pi ?" << endl;
	cin >> sonPi2;
	cout << "Donc j'annonce que " << sonNom2 << " s'imagine que pi vaut " << sonPi2 << "... Quel con !" << endl;
	cout << "Comment vous vous appelez ?" << endl;
	string sonNom2("");
	double sonPi2(0);
	getline(cin, sonNom2);
	cout << "Et d'après vous, combien vaut pi ?" << endl;
	cin >> sonPi2;
	cout << "Donc j'annonce que " << sonNom2 << " s'imagine que pi vaut " << sonPi2 << "... Quel con !" << endl;
	cout << "D'après vous, combien vaut pi ?" << endl;
	string sonNom2("");
	double sonPi2(0);
	cin >> sonPi2;
	cin.ignore();
	cout << "Ah la vache, Ah ouais quand même ! Le champion là ! Et tu t'appelles comment ? Ca m'intéresse ?" << endl;
	getline(cin, sonNom2);
	cout << "Donc j'annonce que " << sonNom2 << " s'imagine que pi vaut " << sonPi2 << "... Quel con !" << endl;
	double const pi(3.14159);
	cout << "Pour tza gouverne, PI vaut " << pi << endl;
	cout << "Addition" << endl;
	double nombre1, nombre2, resultat;
	cout << "Indiquez les nombres à additionner :" << endl << "Premier nombre ?" << endl;
	cin >> nombre1;
	cout << "Deuximème nombre ?" << endl;
	cin >> nombre2;
	resultat = nombre1 + nombre2;
	cout << "Le resultat est : " << resultat << endl;
	int nombreAIncrementer(0);
	++nombreAIncrementer;
	--nombreAIncrementer;
	nombreAIncrementer += 7;
	nombreAIncrementer -= 4;
	nombreAIncrementer *= 5;
	nombreAIncrementer /= 5;
	nombreAIncrementer %= 2;
	cout << nombreAIncrementer << endl;
	cout << "Combien as-tu d'enfants ?" << endl;
	unsigned int nombreDEnfants(0);
	cin >> nombreDEnfants;
	if (nombreDEnfants == 0)
	{
		cout << "Tu n'as pas d'enfants." << endl;
	}
	else if (nombreDEnfants == 1)
	{
		cout << "Tu as 1 enfant." << endl;
	}
	else
	{
		cout << "Tu as des enfants." << endl;
	}
	switch(nombreDEnfants)
	{
	case 0:
		cout << "Tu n'as pas d'enfants." << endl;
		break;
	case 1:
		cout << "Tu as 1 enfant." << endl;
		break;
	default:
		cout << "Tu as des enfants." << endl;
		break;
	}
	cout << "Combien as-tu d'enfants ?" << endl;
	int nombreDEnfants(-1);
	cin >> nombreDEnfants;
	while (nombreDEnfants < 0)
	{
		cout << "Combien avez-vous d'enfants ?" << endl;
		cin >> nombreDEnfants;
	}
	cout << "Merci d'avoir arrêté de vous foutre de ma gueule !" << endl;
	cout << "Combien as-tu d'enfants ?" << endl;
	int nombreDEnfants(0);
	cin >> nombreDEnfants;
	do
	{
		cout << "Combien avez-vous d'enfants ?" << endl;
		cin >> nombreDEnfants;
	} while (nombreDEnfants < 0);
	cout << "Merci d'avoir arrêté de vous foutre de ma gueule !" << endl;
	int compteur(0);
	for (compteur = 0; compteur <= 10; ++compteur)
	{
		cout << compteur << endl;
	}
	
	int nombreB(0);
	cout << "A quel nombre veux-tu ajouter 2 ?" << endl;
	cin >> nombreB;
	cout << "Beh ça fait " << ajouterDeux(nombreB) << ", Connard !" << endl;
	int nombreA(0), nombreB(0);
	cout << "Quels sont les nombres à ajouter ?" << endl;
	cin >> nombreA;
	cout << endl;
	cin >> nombreB;
	cout << "Le résultat est : " << addition(nombreA, nombreB) << endl;

	double note[4];
	cout << "Veuillez Enregistrer vos 4 notes." << endl;
	int const nombreNotes(4);
	cin >> note[0];
	cout << endl;
	cin >> note[1];
	cout << endl;
	cin >> note[2];
	cout << endl;
	cin >> note[3];
	cout << endl;
	double moyenne(0);
	for (int i(0); i < nombreNotes; i++)
	{
		moyenne += note[i];
	}
	moyenne /= nombreNotes;
	cout << "Ta moyenne est de : " << moyenne << ". Sale looser !" << endl;

	vector<double> notes;
	cout << "Veuillez Enregistrer vos notes." << endl;
	string reponse("o");
	int g(0);
	do
	{
		cin >> g;
		notes.push_back(g);
		cout << endl << "Voulez-vous rajouter une autre note ? : o/n";
		cin >> reponse;
	} while(reponse == "o");
	double moyenne(0);
	for (int i(0); i < notes.size(); i++)
	{
		moyenne += notes[i];
	}
	moyenne /= notes.size();
	cout << "Ta moyenne est de : " << moyenne << ". Sale looser !" << endl;


	ofstream monFichier("D:/Open Classroom/Cours C++/Projet/Vive le C++/Vive le C++/Vive le C++/Vive le c++.txt");
		if(monFichier)
		{
			string prenom(" ");
			string nom(" ");
			string ville(" ");
			unsigned int age(0);
			cout << "Quel est ton prénom ?" << endl;
			cin >> prenom;
			cout << endl;
			cout << "Quel est ton nom ?" << endl;
			cin >> nom;
			cout << endl;
			cout << "Quel est ta ville ?" << endl;
			cin >> ville;
			cout << endl;
			cout << "Quel est ton âge ?" << endl;
			cin >> age;
			cout << endl;
			monFichier << prenom << endl << nom << endl << ville << endl << age << endl << "Bonjour " << prenom << " " << nom << ". Tu as " << age << " ans." << endl;
		}
		else
		{
			cout << "erreur 404" << endl;
		}
	string nomDuFichier("D:/Open Classroom/Cours C++/Projet/Vive le C++/Vive le C++/Vive le C++/Vive le c++.txt");
	ofstream monFichier1(nomDuFichier.c_str(), ios::app);
	monFichier1 << "Cette phrase n'a pas tout viré !!" << endl;
	monFichier1.close();

	ifstream monFichier2("Vive le C++.txt");
	string ligne(" ");
	if (monFichier2)
	{
		while(getline(monFichier2, ligne))
		{
			cout << ligne << endl;
		}
		monFichier2.seekg(0, ios::end);
		int position;
		position = monFichier2.tellg();
		cout << "La taille du ficher est de " << position << " caractères." << endl;
	}
	else
	{
		cout << "erreur 404" << endl;
	}*/

	vector <vehicule*> listeVehicules;
	listeVehicules.push_back(new voiture(15000, 5));
	listeVehicules.push_back(new voiture(12000, 3));
	listeVehicules.push_back(new moto(2000, 212.5));

	listeVehicules[0]->affiche();
	listeVehicules[1]->affiche();
	listeVehicules[2]->affiche();

	for (int i(0); i < listeVehicules.size(); ++i)
	{
		delete listeVehicules[i]; 
		listeVehicules[i] = 0;
	}


	system("PAUSE");
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
