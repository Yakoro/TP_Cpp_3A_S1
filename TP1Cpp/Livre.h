#include <iostream>
#include <vector>
#include "Date.h"

class Livre {
public:
	Livre(std::string titre, std::string auteur, std::string langue, std::string genre, Date& date, std::string isbn);
	std::string getIsbn();
	void setListIdTab(std::string id);
private:
	std::string _titre;
	std::string _auteur;
	std::string _langue;
	std::string _genre;
	Date date;
	std::string _isbn;
	std::vector<std::string> _listeIdTab;
};
