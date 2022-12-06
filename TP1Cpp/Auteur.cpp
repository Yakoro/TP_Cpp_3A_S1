#include "Auteur.h"

Auteur::Auteur(std::string nom, std::string prenom, Date& dateNaissance, std::string isbn)
: _nom(nom), _prenom(prenom), _dateNaissance(dateNaissance), _isbn(isbn) {}

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