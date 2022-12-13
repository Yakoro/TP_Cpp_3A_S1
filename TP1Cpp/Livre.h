#pragma once

#include <iostream>
#include <vector>
#include "Date.h"
#include "Auteur.h"

class Livre {
public:
	Livre(std::string titre, Auteur& auteur, std::string langue, std::string genre,Date& date, std::string isbn, bool indiceEmprunt = 0);
	std::string getIsbn();
	void setListIdTab(std::string id);
	Date getDate();
	Auteur getAuteur();
	bool getIndiceEmprunt();
	void livreEmprunt();
	void livreRestitution();
	std::string dernierEmprunteur();
	void setListeIdTab(std::string idLecteur);

private:
	std::string _titre;
	Auteur _auteur;
	std::string _langue;
	std::string _genre;
	Date _date;
	std::string _isbn;
	bool _indiceEmprunt;
	std::vector<std::string> _listeIdTab;
};
