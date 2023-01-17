#include "Auteur.h"

Auteur::Auteur(std::string nom, std::string prenom, Date& dateNaissance, std::string isbn)
: _nom(nom), _prenom(prenom), _dateNaissance(dateNaissance), _isbn(isbn) {}

Auteur::Auteur() {}

std::string Auteur::getNom() {
	return _nom;
}

std::string Auteur::getPrenom() {
	return _prenom;
}

Date Auteur::getDate() {
	return _dateNaissance;
}

std::string Auteur::getIsbn() {
	return _isbn;
}

std::ostream& operator<<(std::ostream& os, Auteur& auteur) {
	os << auteur.getPrenom() << " " << auteur.getNom() << std::endl;
	os << auteur.getDate().getDay() << "/" << auteur.getDate().getMonth() << "/" << auteur.getDate().getYear() << std::endl;
	os << auteur.getIsbn() << std::endl;

	return os;

}