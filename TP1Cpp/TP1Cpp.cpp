#include <iostream>
#include "Date.h"
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"

int main() {
	
	Date date(2, 12, 2022);

	Auteur auteur("Hugo", "Victor", date, "01234567890");

	Livre livre1("Les Misérables", auteur, "Français", "Roman", date, "01234567890");

	Lecteur lecteur1("012345", "Stefane", "Bern");

	Emprunt emprunt1(date, lecteur1, livre1, "01234567890", "012345");

	std::cout << livre1.getIndiceEmprunt() << std::endl;
	emprunt1.EmpruntLivre();
	std::cout << livre1.getIndiceEmprunt() << std::endl;

	std::cout << livre1.dernierEmprunteur() << std::endl;
	std::cout << lecteur1.dernierEmprunt() << std::endl;



	/*std::cout << "AUTEUR" << std::endl;
	std::cout << "Nom : " << (livre1.getAuteur()).getNom() << std::endl;
	std::cout << "Prenom : " << (livre1.getAuteur()).getPrenom() << std::endl;
	std::cout << "Date de naissance : " << ((livre1.getAuteur()).getDate()).getDay() << " / " << ((livre1.getAuteur()).getDate()).getMonth() << " / " << ((livre1.getAuteur()).getDate()).getYear() << std::endl;
	std::cout << "Isbn : " << livre1.getIsbn() << std::endl;


	std::cout << lecteur1.nom() << " " << lecteur1.prenom() << " " << lecteur1.id() << std::endl;
	*/


	/*std::string isbn = livre1.getIsbn();
	std::cout << "isbn affiche : " << isbn << std::endl;*/

	//std::cout << (livre1.getDate()).getDay() << std::endl;

	/* Pareil que
	Date date2 = livre1.getDate();
	std::cout << date2.getMonth() << std::endl;
	std::cout << date2.getYear() << std::endl;*/
	
}