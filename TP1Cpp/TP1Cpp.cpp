#include <iostream>
#include "Date.h"
#include "Livre.h"

int main() {
	
	Date date(2, 12, 2022);

	Auteur auteur("Hugo", "Victor", date, "01234567890");

	Livre livre1("Les Misérables", auteur, "Français", "Roman", date, "01234567890");

	std::cout << "AUTEUR" << std::endl;
	std::cout << "Nom : " << (livre1.getAuteur()).getNom() << std::endl;
	std::cout << "Prenom : " << (livre1.getAuteur()).getPrenom() << std::endl;
	std::cout << "Date de naissance : " << ((livre1.getAuteur()).getDate()).getDay() << " / " << ((livre1.getAuteur()).getDate()).getMonth() << " / " << ((livre1.getAuteur()).getDate()).getYear() << std::endl;
	std::cout << "Isbn : " << livre1.getIsbn();

	//std::cout << (livre1.getDate()).getDay() << std::endl;

	/* Pareil que
	Date date2 = livre1.getDate();
	std::cout << date2.getMonth() << std::endl;
	std::cout << date2.getYear() << std::endl;*/
	
}