#include "emprunt.h"

Emprunt::Emprunt(Date& dateEmprunt, Lecteur& lecteur, Livre& livre, std::string idb, std::string idr)
: _dateEmprunt(dateEmprunt),_lecteur(lecteur), _livre(livre), _idr(idb), _idb(idr) {

}

void Emprunt::EmpruntLivre() {
	bool indiceEmprunt = _livre.getIndiceEmprunt();
	if (indiceEmprunt == 0) {
		_livre.livreEmprunt();

		_livre.setListeIdTab(_lecteur.getId());
		_lecteur.setListIsbn(_livre.getIsbn());

	}
	else {
		std::cout << "Livre non disponible";
	}
}

void Emprunt::RestitutionLivre() {
	std::string dernierE = _livre.dernierEmprunteur();
		if (dernierE == _lecteur.getId()) {
			_livre.livreRestitution();
		}
		else {
			std::cout << "Vous n'avez pas emprunte ce livre" << std::endl;
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