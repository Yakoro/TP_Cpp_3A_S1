#pragma once

#include <iostream>
#include "Client.h"
#include "Magasin.h"
#include "Produit.h"

int main() {


    /*std::cout << "Que voulez vous faire ?" << std::endl;
    std::cout << "Action relative au : \n1 : Magasin\n2 : Client\n3 : Commande\n4 : Exit" << std::endl;
    std::cin >> choix1;
    if (choix1 > 4) {
        choix1 = 4;
    }
    Magasin magasin;
    switch (choix1) {
    case 1:
    {
        std::cout << "Que voulez vous faire ?" << std::endl;
        std::cout << "1 : Ajout d'un produit\n2 : Afficher les produits disponibles\n3 : Afficher un produit via son nom\n4 : Mettre à jour la quantite d'un produit\5 : Afficher tous les clients" << std::endl;
        int choix2;
        std::cin >> choix2;
        switch (choix1) {
        case 1:
        {
            std::cout << "Quel est le nom du produit ?" << std::endl;
            std::string p;
            std::getline(std::cin >> std::ws, p);
            magasin.addProduit(magasin.afficheNom(p));
        }
        case 2:
        {

        }
        case 3:
        {

        }
        case 4:
        {

        }
        case 5:
        {

        }

        }
    case 2:
    {
        std::cout << "Que voulez vous faire ?" << std::endl;
        std::cout << "1 : Ajouter un produit au panier\n2 : Vider le panier\n3 : Modifier la quantite d'un produit\n4 : Supprimer un produit du panier\n5 : Afficher les informations d'un client" << std::endl;
        int choix2;
        std::cin >> choix2;
        switch (choix1) {
        case 1:
        {

        }
        case 2:
        {

        }
        case 3:
        {

        }
        case 4:
        {

        }
        case 5:
        {

        }

        }
    case 3:
    {
        std::cout << "Que voulez vous faire ?" << std::endl;
        std::cout << "1 : Valider une commande\n2 : Mettre a jour le statut d'une commande" << std::endl;
        int choix2;
        std::cin >> choix2;
        switch (choix1) {
        case 1:
        {

        }
        case 2:
        {

        }
        case 3:
        {

        }
        case 4:
        {

        }
        case 5:
        {

        }

        }
    case 4:
    {
        j = 1;
    }*/



    //Creation d'un objet vide magasin
    Magasin magasin;

    //Creation de 4 produits
    Produit p0("Air Force1", "basket", 5, 150.00);
    Produit p1("iPhone X", "Telephone Apple 256Go", 1, 350.00);
    Produit p2("Air Jordan", "basket", 2, 100.00);
    Produit p3("HP Pavillon", "ordinateur portable", 1, 500.00);

    //Ajout des produits au magasin
    magasin.addProduit(p0);
    magasin.addProduit(p1);
    magasin.addProduit(p2);
    magasin.addProduit(p3);

    //Affichage des produits du magasin
    /*std::vector <Produit> produits = magasin.affichageProduits();
    for (int i = 0; i < produits.size(); i++) {
        std::cout << produits[i] << std::endl;
    }

    //Affichage d'un produit par son nom
    std::string p;
    std::cout << "Quel produit voulez vous chercher ?" << std::endl;
    std::getline(std::cin >> std::ws, p);
    Produit prod = magasin.afficheNom(p);
    std::cout << "Produit main : " << prod << std::endl;

    //Changement d'une quantité via un nom de produit (Ne fonctionne pas pour le moment)
    magasin.changeQuantity("iPhone X", 5, magasin);
    std::cout << p1 << std::endl;
    std::cout << p1.getQuantite() << std::endl; */

    //Creation d'un client
    Client client("Yvana", "Touko", "012345");

    //Ajout de produits au panier
    //client.ajoutProduit(p0);
    //client.ajoutProduit(p1);
    //client.ajoutProduit(p2);
    //client.ajoutProduit(p3);

    //Affichage panier
    std::cout << "Avant supression : " << std::endl;
    std::cout << std::endl;
    std::vector <Produit> vec = client.getPanier();
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i].getTitre() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Fin" << std::endl;
    std::cout << std::endl;

    //Suppression de produits du panier
    client.supprimerProduit(p1);
    client.supprimerProduit(p3);

    //Affichage panier
    std::cout << "Apres supression : " << std::endl;
    std::cout << std::endl;
    vec = client.getPanier();
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i].getTitre() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Fin" << std::endl;

    //Vidage du panier
    //client.viderPanier();

    //Modification de la quantite d'un produit du panier
    client.setQuantite(p0, 10);
    std::cout << p0.getQuantite() << std::endl;


    //Affichage panier
    std::cout << "Apres modif : " << std::endl;
    std::cout << std::endl;
    vec = client.getPanier();
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Fin" << std::endl;

    std::cout << client << std::endl;

    //Ajout d'un client dans le magasin
    magasin.addClient(client);

    //Affichage de tous les clients
    magasin.afficheClients();

    //Affichage d'un client du magasin via son nom
    std::cout << magasin.afficheNomClient("Touko") << std::endl;

    //Ajout d'un produit au panier d'un client
    magasin.ajoutProdPanier(client, p3);
    magasin.ajoutProdPanier(client, p2);

    //Suppression d'un produit au panier d'un client
    magasin.suppProdPanier(client, p2);

    //Modification de la quantite d'un produit du panier
    magasin.changeQuantPanier(client, p3, 22);

    std::cout << client << std::endl;

    Commande commande(client, false);

    magasin.validerCommande(commande);

    std::cout << commande << std::endl;

    //Commande c(false);

     /*std::cout << p;
        Magasin m;
        m.addProduit(p);
        m.addProduit(p1);
        m.addProduit(p2);
        m.affichageProduit();*/

        /*Date d1(4,5,2004);
        Date d6(5,5,2004);
        Date d2(31,12,2021);
        Date d3(1,1,2021);
        Date d4(25,6,2003);
        Date d5(25,7,2003);

        //d1.updateMonth(6);

        //d2.next();

        std::cout << d1;
        std::cout << d2;
        std::cout << d3;
        std::cout << d4;
        std::cout << d5;
        std::cout << d6;

        d1.addDate(d1);
        d2.addDate(d2);
        d3.addDate(d3);
        d4.addDate(d4);
        d5.addDate(d5);
        d6.addDate(d6);

        d1.quickselect(d1);
        d2.quickselect(d2);
        d3.quickselect(d3);
        d4.quickselect(d4);
        d5.quickselect(d5);*/

    return 0;
}