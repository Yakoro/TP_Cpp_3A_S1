#include "emprunt.h"

Emprunt::Emprunt(Date& dateEmprunt, Lecteur& lecteur, Livre& livre, std::string idb, std::string idr)
: _dateEmprunt(dateEmprunt),_lecteur(lecteur), _livre(livre), _idr(idb), _idb(idr) {}

void Emprunt::EmpruntLivre() {
	bool indiceEmprunt = _livre.getIndiceEmprunt();
	if (indiceEmprunt == 0) {
		_livre.livreEmprunt();
	}
	else {
		std::cout << "Livre non disponible";
	}
}

Lecteur Emprunt::getLecteur() {
	return _lecteur;
}

Date Emprunt::getDateEmprunt() {
	return _dateEmprunt;
}

Livre Emprunt::getLivre() {
	return _livre;
}