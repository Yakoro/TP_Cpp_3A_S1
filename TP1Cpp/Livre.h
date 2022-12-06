#pragma once

#include <iostream>
#include <vector>
#include "Date.h"
#include "Auteur.h"

class Livre {
public:
	Livre(std::string titre, Auteur& auteur, std::string langue, std::string genre,Date& date, std::string isbn);
	std::string getIsbn();
	void setListIdTab(std::string id);
	Date getDate();
	Auteur getAuteur();
private:
	std::string _titre;
	Auteur _auteur;
	std::string _langue;
	std::string _genre;
	Date _date;
	std::string _isbn;
	std::vector<std::string> _listeIdTab;
};
