#include "Lecteur.h"

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom) {
	_id = id;
	_nom = nom;
	_prenom = prenom;

}
std::string Lecteur::getId() {
	return _id;
}

std::string Lecteur::getNom() {
	return _nom;
}

std::string Lecteur::getPrenom() {
	return _prenom;
}

void Lecteur::setListIsbn(std::string isbnLivre) {
	_listIsbn.push_back(isbnLivre);
}

std::string Lecteur::dernierEmprunt() {
	if (!_listIsbn.empty()) {
		return _listIsbn.back();
	}
	else {
		return "0";
	}
}

std::ostream& operator<<(std::ostream& os, Lecteur& lecteur) {
	os << lecteur.getPrenom() << " " << lecteur.getNom() << std::endl;
	os << lecteur.getId() << std::endl;

	return os;

}