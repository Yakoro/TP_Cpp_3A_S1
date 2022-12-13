#pragma once
#include <iostream>
#include <vector>

class Lecteur
{
public:
	Lecteur(std::string id, std::string nom, std::string prenom);
	std::string getId();
	std::string getNom();
	std::string getPrenom();
	std::string dernierEmprunt();
	void setListIsbn(std::string isbnLivre);

private:
	std::string _id;
	std::string _nom;
	std::string _prenom;
	std::string _id_livre;

	std::vector<std::string> _listIsbn;

	friend std::ostream& operator<<(std::ostream& os, Lecteur& lecteur);
};

