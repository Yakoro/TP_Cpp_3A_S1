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

void Bibli::empruntLivre(Livre& livre) {
	std::string isbnLivre = livre.getIsbn();
	_livresEmpruntes.push_back(isbnLivre);
}

/*void Bibli::restitutionLivre(Livre& livre) {
	std::string isbnLivre = livre.getIsbn();
	for (int i = 0; i <= _livresEmpruntes.size(); i++) {
		if ( _livresEmpruntes.at(i) == isbnLivre) {
			_livresEmpruntes.erase(i);
		}
	}
}*/