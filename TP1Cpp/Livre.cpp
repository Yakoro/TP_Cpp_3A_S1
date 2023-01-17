#include "Livre.h"

Livre::Livre(std::string titre, Auteur& auteur, std::string langue, std::string genre, Date& date, std::string isbn, bool indiceEmprunt)
:_titre(titre), _auteur(auteur), _langue(langue), _genre(genre), _date(date), _isbn(isbn), _indiceEmprunt(indiceEmprunt)  {}

Livre::Livre() {}

std::string Livre::getTitre() {
	return _titre;
}

Auteur Livre::getAuteur() {
	return _auteur;
}

std::string Livre::getLangue() {
	return _langue;
}

std::string Livre::getGenre() {
	return _genre;
}

Date Livre::getDate() {
	return _date;
}

std::string Livre::getIsbn() {
	return _isbn;
}

void Livre::setListIdTab(std::string id) {
	_listeIdTab.push_back(id);
}

/*void Livre::affInfosLivre() {
	std::cout << _livre;
}*/

bool Livre::getIndiceEmprunt() {
	return _indiceEmprunt;
}

void Livre::livreEmprunt() {
	_indiceEmprunt = 1;
}

void Livre::livreRestitution() {
	_indiceEmprunt = 0;
}

std::string Livre::dernierEmprunteur() {
	if (!_listeIdTab.empty()) {
		return _listeIdTab.back();
	}
	else {
		return "0";
	}
}

void Livre::setListeIdTab(std::string idLecteur) {
	_listeIdTab.push_back(idLecteur);
}

std::ostream& operator<<(std::ostream& os, Livre& livre) {
	os << livre.getTitre() << std::endl;
	os << livre.getAuteur().getPrenom() << " " << livre.getAuteur().getNom() << std::endl;
	os << livre.getLangue() << std::endl;
	os << livre.getGenre() << std::endl;
	os << livre.getDate().getDay() << "/" << livre.getDate().getMonth() << "/" << livre.getDate().getYear() << std::endl;
	os << livre.getIsbn() << std::endl;

	return os;

}