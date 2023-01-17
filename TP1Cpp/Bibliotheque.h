#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include "Auteur.h"
#include "Livre.h"
#include "Lecteur.h"

class Bibli {
public:
	Bibli();
	void addAuteur(Auteur& auteur);
	void addLivre(Livre& livre);
	void addLecteur(Lecteur& lecteur);
	std::vector<Livre> chercheLivre(std::string auteur);
	std::vector<Livre> chercheLivresEmpruntes();
	std::vector<std::string> livreDuLecteur(Lecteur& lecteur);
	std::vector<Lecteur> classementLecteurs();
	Lecteur identification(std::string id);
	int identification2(std::string id);
	Lecteur& returnLecteur(int i);
	Livre& returnLivre(int i);
	std::vector<Livre> getLivres();
	std::vector<Auteur> getAuteurs();
	std::vector<Lecteur> getLecteurs();

private:
	std::vector<Auteur> _tabAuteur;
	std::vector<Livre> _tabLivre;
	std::vector<Lecteur> _tabLecteur;

};