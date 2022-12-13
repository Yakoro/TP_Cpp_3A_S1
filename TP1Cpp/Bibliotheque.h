#pragma once
#include <vector>
#include <iostream>
#include "Auteur.h"
#include "Livre.h"
#include "Lecteur.h"

class Bibli {
public:
	void addAuteur(Auteur& auteur);
	void addLivre(Livre& livre);
	void addLecteur(Lecteur& lecteur);

private:
	std::vector<Auteur> _tabAuteur;
	std::vector<Livre> _tabLivre;
	std::vector<Lecteur> _tabLecteur;

};