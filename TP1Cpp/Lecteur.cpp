#include "Lecteur.h"

Lecteur::Lecteur(std::string id, std::string nom, std::string prenom) {
	_id = id;
	_nom = nom;
	_prenom = prenom;

}
std::string Lecteur::id() {
	return _id;
}
std::string Lecteur::nom() {
	return _nom;
}
std::string Lecteur::prenom() {
	return _prenom;
}