#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include "Auteur.h"
#include "Livre.h"
#include "Lecteur.h"

class Bibli {
public:
	void addAuteur(Auteur& auteur);
	void addLivre(Livre& livre);
	void addLecteur(Lecteur& lecteur);
	void empruntLivre(Livre& livre);
	//void restitutionLivre(Livre& livre);

private:
	std::vector<Auteur> _tabAuteur;
	std::vector<Livre> _tabLivre;
	std::vector<Lecteur> _tabLecteur;

	std::vector<std::string> _livresEmpruntes;

};