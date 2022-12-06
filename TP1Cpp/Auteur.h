#pragma once
#include <iostream>
#include "Date.h"

class Auteur {
public:
	Auteur(std::string nom, std::string prenom, Date& dateNaissance, std::string isbn);
	std::string getNom();
	std::string getPrenom();
	Date getDate();
	std::string getIsbn();
private:
	std::string _nom;
	std::string _prenom;
	Date _dateNaissance;
	std::string _isbn;

};
