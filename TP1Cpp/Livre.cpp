#include "Livre.h"

Livre::Livre(std::string titre, Auteur& auteur, std::string langue, std::string genre, Date& date, std::string isbn)
:_titre(titre), _auteur(auteur), _langue(langue), _genre(genre), _date(date), _isbn(isbn) {}


std::string Livre::getIsbn() {
	return _isbn;
}

void Livre::setListIdTab(std::string id) {
	_listeIdTab.push_back(id);
}

Date Livre::getDate() {
	return _date;
}

Auteur Livre::getAuteur() {
	return _auteur;
}
