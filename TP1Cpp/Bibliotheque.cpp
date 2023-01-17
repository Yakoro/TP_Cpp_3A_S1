#include "Bibliotheque.h"

Bibli::Bibli() {}

void Bibli::addAuteur(Auteur& auteur) {
	_tabAuteur.push_back(auteur);
}

void Bibli::addLivre(Livre& livre) {
	_tabLivre.push_back(livre);
}

void Bibli::addLecteur(Lecteur& lecteur) {
	_tabLecteur.push_back(lecteur);
}

std::vector<Livre> Bibli::chercheLivre(std::string auteur) {
	Auteur auteurObjet;
	int i;
	for (i = 0; i < _tabAuteur.size(); i++) {
		auteurObjet = _tabAuteur[i];
		if (auteurObjet.getNom() == auteur) {
			i = _tabAuteur.size();
		}
	}
	std::vector<Livre> tabLivre;
	if (i != _tabAuteur.size() + 1) {
		return tabLivre;
	}

	if (!_tabLivre.empty()) {
		Livre livre;
		for (int i = 0; i < _tabLivre.size(); i++) {
			livre = _tabLivre[i];
			if (livre.getAuteur().getNom() == auteurObjet.getNom()) {
				tabLivre.push_back(livre);
			}
		}
	}
	return tabLivre;
}

std::vector<Livre> Bibli::chercheLivresEmpruntes() {
	float nbLivresEmpruntes = 0;
	std::vector<Livre> tabLivre;
	if (!_tabLivre.empty()) {
		for (int i = 0; i < _tabLivre.size(); i++) {
			Livre livre = _tabLivre[i];
			if (livre.getIndiceEmprunt() == 1) {
				tabLivre.push_back(livre);
				nbLivresEmpruntes++;
			}
		}
		return tabLivre;

		//pourcentage des livres actuellement empruntes
		nbLivresEmpruntes = nbLivresEmpruntes / _tabLivre.size() * 100;
	}
}

std::vector<std::string> Bibli::livreDuLecteur(Lecteur& lecteur) {
	std::vector<std::string> tabTitres;
	if (!_tabLivre.empty()) {
		for (int i = 0; i < _tabLivre.size(); i++) {
			Livre livre = _tabLivre[i];
			if (livre.getIndiceEmprunt() == 1) {
				if (livre.dernierEmprunteur() == lecteur.getId())
					tabTitres.push_back(livre.getTitre());
			}
		}
	}
	return tabTitres;
}

std::vector<Lecteur> Bibli::classementLecteurs() {
	
	//Création d'un tableau contenant le nombre de livres empruntes par chaque lecteur
	std::vector<int> tabNbEmprunts;
	for (int i = 0; i < _tabLecteur.size(); i++) {
		tabNbEmprunts.push_back(livreDuLecteur(_tabLecteur[i]).size());
	}

	//Création et tri d'un tableau contenant les objets lecteur
	std::vector<Lecteur> tabLecteursTries = _tabLecteur;
	int a, j;
	do {
		j = 0;
		for (int i = 0; i < tabNbEmprunts.size() - 1; i++) {
			if (tabNbEmprunts[i] < tabNbEmprunts[i + 1]) {
				a = tabNbEmprunts[i];
				tabNbEmprunts[i] = tabNbEmprunts[i + 1];
				tabNbEmprunts[i + 1] = a;

				Lecteur lecteur = tabLecteursTries[i];
				tabLecteursTries[i] = tabLecteursTries[i + 1];
				tabLecteursTries[i + 1] = lecteur;
				j++;
			}
		}
	} while (j != 0);
	return tabLecteursTries;
}

Lecteur Bibli::identification(std::string id) {
	Lecteur lecteur;
	for (int i = 0; i < _tabLecteur.size(); i++) {
		lecteur = _tabLecteur[i];
		if (lecteur.getId() == id) {
			Lecteur& lecteur2 = _tabLecteur[i];
			return lecteur2;
		}
	}
	Lecteur lecteur3("0", "0", "0");
	return lecteur3;
}

int Bibli::identification2(std::string id) {
	for (int ident = 0; ident < _tabLivre.size(); ident++) {
		Livre livre = _tabLivre[ident];
		if (livre.getTitre() == id) {
			return ident;
		}
	}
	return -1;
}

Lecteur& Bibli::returnLecteur(int i) {
	Lecteur lecteur = _tabLecteur[i];
	return lecteur;
}

Livre& Bibli::returnLivre(int i) {
	return _tabLivre[i];
}

std::vector<Livre> Bibli::getLivres() {
	return _tabLivre;
}
std::vector<Auteur> Bibli::getAuteurs() {
	return _tabAuteur;
}
std::vector<Lecteur> Bibli::getLecteurs() {
	return _tabLecteur;
}