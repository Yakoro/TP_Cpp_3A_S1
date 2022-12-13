#pragma once
#include <iostream>
#include "Lecteur.h"
#include "Livre.h"
#include "Date.h"
#include "Livre.h"
#include <string>

//idr pour id du lecteur (reader) et idb pour celui d'un livre(book)

class Emprunt
{
public:
	Emprunt(Date& dateEmprunt, Lecteur& lecteur, Livre& livre, std::string _idb, std::string _idr);
	Lecteur getLecteur();
	Date getDateEmprunt();
	Livre getLivre();
	void EmpruntLivre();
	void RestitutionLivre();
	void TabLivre();
	void TabLecteur();

private:
	Date _dateEmprunt;
	Livre& _livre;
	Lecteur& _lecteur;

	std::string _idb;
	std::string _idr;
};
