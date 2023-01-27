#pragma once

#include <iostream>
#include "Commande.h"
#include "Produit.h"
#include "Client.h"
#include <vector>

class Magasin {
public:
    Magasin();
    void addProduit(Produit& produit);
    Produit& afficheNom(std::string p);
    std::vector <Produit> affichageProduits();
    void changeQuantity(std::string nomProduit, int quantite, Magasin& magasin);
    void addClient(Client& c);
    void afficheClients();
    Client& afficheNomClient(std::string nom);
    void ajoutProdPanier(Client& client, Produit& produit);
    void suppProdPanier(Client& client, Produit& produit);
    void changeQuantPanier(Client& client, Produit& produit, int quantite);

    //Commande
    void validerCommande(Commande& commande);
    void statutCommande(Commande& commande);


private:
    std::vector <Produit> _produits;
    std::vector <Client> _clients;
    std::vector <Commande> _commandes;
};

