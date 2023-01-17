#include <iostream>
#include <string>
#include "Date.h"
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Bibliotheque.h"

int main() {

	Date datePubli1(1, 1, 1862);
	Date datePubli2(1, 1, 1856);
	Date datePubli3(1, 1, 1831);
	Date datePubli4(8, 8, 1886);
	Date datePubli5(1, 1, 1885);
	Date datePubli6(1, 12, 1887);
	Date datePubli7(1, 1, 1934);
	Date datePubli8(1, 9, 1937);
	Date datePubli9(1, 1, 1963);
	Date datePubli10(1, 1, 1947);

	Date dateNaissance1(26, 2, 1802);
	Date dateNaissance2(5, 8, 1850);
	Date dateNaissance3(15, 9, 1890);
	Date dateNaissance4(31, 7, 1919);

	Date dateEmprunt1(2, 12, 2022);
	Date dateEmprunt2(10, 12, 2022);
	Date dateEmprunt3(13, 12, 2022);

	Auteur auteur1("Hugo", "Victor", dateNaissance1, "1000");
	Auteur auteur2("de Maupassant", "Guy", dateNaissance2, "2000");
	Auteur auteur3("Christie", "Agatha", dateNaissance3, "3000");
	Auteur auteur4("Levi", "Primo", dateNaissance4, "4000");

	Livre livre1("Les Miserables", auteur1, "Francais", "Roman", datePubli1, "1001");
	Livre livre2("Les Contemplations", auteur1, "Francais", "Recueil de poèmes", datePubli2, "1002");
	Livre livre3("Notre-Dame de Paris", auteur1, "Francais", "Roman", datePubli3, "1003");
	Livre livre4("Le Horla", auteur2, "Francais", "Nouvelle", datePubli4, "2001");
	Livre livre5("Bel-Ami", auteur2, "Francais", "Roman", datePubli5, "2002");
	Livre livre6("Pierre et Jean", auteur2, "Francais", "Roman", datePubli6, "2003");
	Livre livre7("Le Crime de l'Orient-Express", auteur3, "Anglais", "Roman Policier", datePubli7, "3001");
	Livre livre8("Mort sur le Nil", auteur3, "Anglais", "Roman Policier", datePubli8, "3002");
	Livre livre9("La Treve", auteur4, "Italien", "Roman", datePubli9, "4001");
	Livre livre10("Si c'est un homme", auteur4, "Italien", "Temoignage Autobiographique", datePubli10, "4002");


	Lecteur lecteur1("012345", "Bienvenu", "Elie");
	Lecteur lecteur2("012346", "Cosials", "Julien");
	Lecteur lecteur3("012347", "Benameur", "Camil");

	Bibli bibli1;
	bibli1.addAuteur(auteur1);
	bibli1.addAuteur(auteur2);
	bibli1.addAuteur(auteur3);
	bibli1.addAuteur(auteur4);

	bibli1.addLivre(livre1);
	bibli1.addLivre(livre2);
	bibli1.addLivre(livre3);
	bibli1.addLivre(livre4);
	bibli1.addLivre(livre5);
	bibli1.addLivre(livre6);
	bibli1.addLivre(livre7);
	bibli1.addLivre(livre8);
	bibli1.addLivre(livre9);
	bibli1.addLivre(livre10);

	bibli1.addLecteur(lecteur1);
	bibli1.addLecteur(lecteur2);
	bibli1.addLecteur(lecteur3);

	int i = 0;
	int choix;

	// Déclarations pour le switch
	Lecteur lecteurChoose;
	//Livre livreChoose;
	std::string id;
	int j = 1;
	bool o = 0;
	std::vector<Livre> tabLivresAuteur;

	int u = 0;
	while (u == 0) {
		std::cout << "Quel est votre numero d'identification (id) ?" << std::endl;
		std::cin >> id;
		std::cout << std::endl;
		lecteurChoose = bibli1.identification(id);
		if (lecteurChoose.getId() == "0") {
			std::cout << "Numero invalide" << std::endl;
		}
		else {
			std::cout << "Bonjour " << lecteurChoose.getPrenom() << std::endl;
			u = 1;
		}
	}

	while (i == 0) {
		 do {
			o = 1;
			std::cout << std::endl;
			std::cout << "Que voulez-vous faire ?" << std::endl;
			std::cout << std::endl;
			std::cout << "1 : Emprunter un livre\n2 : Rendre un livre\n3 : Chercher les livres d'un auteur\n4 : Chercher tous les livres empruntes\n5 : Chercher les livres empruntes par un lecteur\n6 : Afficher le classement des lecteurs par nombre de livres empruntes\n7 : Afficher une liste\n8 : Exit" << std::endl;
			std::cin.clear(); std::cin.ignore();
			std::cin >> choix;
			if (std::isdigit(choix) == true) {
				std::cout << "Saisie incorrecte" << std::endl;
				o = 0;
			}
			else {
				if (choix > 8 || choix < 1) {
					std::cout << "Saisie incorrecte" << std::endl;
					std::cout << std::endl;
					o = 0;
				}

			}
		} while (o == 0);
		switch (choix) {
		case 1:
		{
			std::cout << "Quel est le titre du livre que vous voulez emprunter ?" << std::endl;
			std::getline(std::cin >> std::ws, id);

			j = bibli1.identification2(id);
			//std::cout << std::to_string(j) << std::endl;
			if (j == -1) {
				std::cout << "Titre invalide" << std::endl;

			}
			else {
				Livre& livreChoose = bibli1.returnLivre(j);
				//std::cout << livreChoose.getTitre() << std::endl;
				Emprunt emprunt1(dateEmprunt1, lecteurChoose, livreChoose);
				emprunt1.EmpruntLivre();
				//std::cout << livreChoose.dernierEmprunteur() << std::endl;
			}

			break;
		}
		case 2:
		{
			std::cout << "Quel est le titre du livre que vous voulez rendre ?" << std::endl;
			std::getline(std::cin >> std::ws, id);

			j = bibli1.identification2(id);
			Livre& livreChoose = bibli1.returnLivre(j);
			//std::cout << std::to_string(j) << std::endl;
			//std::cout << livreChoose.dernierEmprunteur() << std::endl;
			if (j == -1) {
				std::cout << "Titre invalide" << std::endl;

			}
			else {
				//std::cout << livreChoose.getTitre() << std::endl;
				Emprunt emprunt2(dateEmprunt1, lecteurChoose, livreChoose);

				emprunt2.RestitutionLivre();
				//std::cout << livreChoose.dernierEmprunteur() << std::endl;
			}
			break;
		}
		case 3:
			std::cout << "Quel est le nom de l'auteur ?" << std::endl;
			std::cin >> id;
			std::cout << std::endl;

			tabLivresAuteur = bibli1.chercheLivre(id);
			if (tabLivresAuteur.empty()) {
				std::cout << "Saisie incorrecte" << std::endl;
				
			}
			else {
				for (int i = 0; i < tabLivresAuteur.size(); i++) {
					std::cout << tabLivresAuteur[i].getTitre() << std::endl;
				}
				std::cout << std::endl;
			}
			break;
		case 4:
		{
			std::cout << "Les livres actuellement empruntes sont :" << std::endl;
			std::vector<Livre> tabLivres = bibli1.chercheLivresEmpruntes();
			for (int i = 0; i < tabLivres.size(); i++) {
				std::cout << tabLivres[i].getTitre() << std::endl;
			}
			std::cout << std::endl;

			break;
		}
		case 5:
		{
			std::cout << "Quel est le nom du lecteur dont vous voulez connaitre les emprunts ?" << std::endl;
			std::getline(std::cin >> std::ws, id);
			Lecteur lecteurChoose2 = bibli1.identification(id);
			if (lecteurChoose2.getId() == "0") {
				std::cout << std::endl;
				std::cout << "Numero invalide" << std::endl;
				std::cout << std::endl;

			}
			else {
				std::vector<std::string> tabTitres = bibli1.livreDuLecteur(lecteurChoose2);
				for (int i = 0; i < tabTitres.size(); i++) {
					std::cout << std::endl;
					std::cout << tabTitres[i] << std::endl;
					std::cout << std::endl;
				}
				break;
			}

		}
		case 6:
		{
			std::cout << std::endl;
			std::vector<Lecteur> tabClassementLecteur = bibli1.classementLecteurs();
			for (int i = 0; i < tabClassementLecteur.size(); i++) {
				std::cout << tabClassementLecteur[i] << std::endl;
			}
			break;
		}
		case 7:
		{
			std::cout << "Que voulez vous afficher ?\n1 : Liste des livres\n2 : Liste des auteurs\n3 : Liste des lecteurs\n4 : Exit" << std::endl;
			int choix2;
			std::cin.clear(); std::cin.ignore();
			std::cin >> choix2;
			if (std::isdigit(choix2) == false) {
				choix2 = 4;
			}
			else {
				if (choix2 > 4 || choix2 < 1) {
					choix2 = 4;
				}
			}
			switch (choix2) {
			case 1:
			{
				std::vector<Livre> tabLivre = bibli1.getLivres();
				for (int i = 0; i < tabLivre.size(); i++) {
					std::cout << tabLivre[i] << std::endl;
				}
				break;
			}
			case 2:
			{
				std::vector<Auteur> tabAuteur = bibli1.getAuteurs();
				for (int i = 0; i < tabAuteur.size(); i++) {
					std::cout << tabAuteur[i] << std::endl;
				}
				break;
			}
			case 3:
			{
				std::vector<Lecteur> tabLecteur = bibli1.getLecteurs();
				for (int i = 0; i < tabLecteur.size(); i++) {
					std::cout << tabLecteur[i] << std::endl;
				}
				break;
			}
			case 4:
				break;
			}
			break;
		}
		case 8:
			i = 1;
			break;
		default:
			std::cout << "Valeur non valide" << std::endl;
			break;
		}
	}





	/*Emprunt emprunt1(dateEmprunt1, lecteur1, livre1);
	Emprunt emprunt2(dateEmprunt2, lecteur2, livre4);
	Emprunt emprunt3(dateEmprunt2, lecteur2, livre5);
	emprunt1.EmpruntLivre();
	emprunt2.EmpruntLivre();
	emprunt3.EmpruntLivre();*/
	/*Emprunt emprunt2(dateEmprunt2, lecteur2, livre1);
	emprunt1.EmpruntLivre();
	std::cout << livre1.dernierEmprunteur() << std::endl;
	std::cout << lecteur1.dernierEmprunt() << std::endl;
	emprunt1.RestitutionLivre();
	emprunt2.EmpruntLivre();
	std::cout << livre1.dernierEmprunteur() << std::endl;
	std::cout << lecteur1.dernierEmprunt() << std::endl;*/

	/*std::cout << livre1 << std::endl;
	std::cout << std::endl;
	std::cout << lecteur1 << std::endl;
	std::cout << std::endl;
	std::cout << auteur1 << std::endl;*/



	/*std::vector<Livre> tabLivresAuteur = bibli1.chercheLivre(auteur3);
	for (int i = 0; i < tabLivresAuteur.size(); i++) {
		std::cout << tabLivresAuteur[i].getTitre() << std::endl;
	}

	std::cout << std::endl;
	
	std::vector<Livre> tabLivres = bibli1.chercheLivresEmpruntes();
	for (int i = 0; i < tabLivres.size(); i++) {
		std::cout << tabLivres[i].getTitre() << std::endl;
	}

	std::cout << std::endl;

	std::vector<std::string> tabTitres = bibli1.livreDuLecteur(lecteur2);
	for (int i = 0; i < tabTitres.size(); i++) {
		std::cout << tabTitres[i] << std::endl;
	}

	std::cout << std::endl;

	std::vector<Lecteur> tabClassementLecteur = bibli1.classementLecteurs();
	for (int i = 0; i < tabClassementLecteur.size(); i++) {
		std::cout << tabClassementLecteur[i] << std::endl;
	}
	*/
}