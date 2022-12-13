#include "Bibliotheque.h"

void Bibli::addAuteur(Auteur& auteur) {
	_tabAuteur.push_back(auteur);
}

void Bibli::addLivre(Livre& livre) {
	_tabLivre.push_back(livre);
}

void Bibli::addLecteur(Lecteur& lecteur) {
	_tabLecteur.push_back(lecteur);
}