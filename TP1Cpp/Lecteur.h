#pragma once
#include <iostream>
#include <vector>

class Lecteur
{
public:
	Lecteur(std::string id, std::string nom, std::string prenom);
	std::string id();
	std::string nom();
	std::string prenom();

private:
	std::string _id;
	std::string _nom;
	std::string _prenom;
	std::string _id_livre;

	std::vector<std::string> _list_isbn;
};

