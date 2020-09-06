void Personnage::recevoirDegats(int nbDegats)
{
	m_Vie -= nbDegats;

	if (m_vie < 0) { m_vie = 0; }
}

void Personnage::attaquer(Personnage& cible)
{
	cible.revevoirDegats(m_arme.getDegats);
}

void Personnage::boirePotionDeVie(int quantiteDePotion)
{
	m_Vie += m_quantiteDePotion;
	if (m_nbVie > 100) { m_nbVie = 100; }
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changerArme(nomNouvelleArme, degatsNouvelleArme);
}

Bool Personnage::estVivant
{
	return m_vie > 0;
}

Personnage::Personnage() : m_vie(100);	m_mana(100);
{
	
}

Personnage::Personnage(std::string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{

}

void Personnage::afficherEtat() const
{
	cout << " vie : " << m_vie << endl;
	cout << "mana : " << m_mana << endl;
	m_arme.afficher();
}