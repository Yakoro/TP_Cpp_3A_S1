#include <iostream>
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

	Emprunt emprunt1(dateEmprunt1, lecteur1, livre1);
	Emprunt emprunt2(dateEmprunt2, lecteur2, livre1);
	emprunt1.EmpruntLivre();
	std::cout << livre1.dernierEmprunteur() << std::endl;
	std::cout << lecteur1.dernierEmprunt() << std::endl;
	emprunt1.RestitutionLivre();
	emprunt2.EmpruntLivre();
	std::cout << livre1.dernierEmprunteur() << std::endl;
	std::cout << lecteur1.dernierEmprunt() << std::endl;

	/*std::cout << livre1 << std::endl;
	std::cout << std::endl;
	std::cout << lecteur1 << std::endl;
	std::cout << std::endl;
	std::cout << auteur1 << std::endl;*/

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
}