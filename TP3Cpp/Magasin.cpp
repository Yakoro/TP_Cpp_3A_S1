#include "Magasin.h"

Magasin::Magasin() {}

void Magasin::addProduit(Produit& produit) {
    int indice = 0;
    for (int i = 0; i < _produits.size(); i++) {
        if (_produits[i].getTitre() == produit.getTitre()) {
            indice = 1;
        }
    }
    if (indice == 0) {
        _produits.push_back(produit);
    }
}

std::vector <Produit> Magasin::affichageProduits() {
    return _produits;
}

Produit& Magasin::afficheNom(std::string p) {
    Produit produit;
    for (int i = 0; i < _produits.size(); i++) {
        if (_produits[i].getTitre() == p) {
            produit = _produits[i];
            return _produits[i];
        }
    }
    return produit;
}

void Magasin::changeQuantity(std::string nomProduit, int quantite, Magasin& magasin) {
    Produit& produit = magasin.afficheNom(nomProduit);
    std::cout << "aff mag : " << produit << std::endl;
    produit.setQuantite(quantite);
    std::cout << produit.getQuantite() << std::endl;
}

void Magasin::addClient(Client& c) {
    bool indice = true;
    for (int i = 0; i < _clients.size(); i++) {
        if (c.getId() == _clients[i].getId()) {
            indice = false;
        }
    }
    if (indice = true) {
        std::cout << "client ajoute " << std::endl;
        _clients.push_back(c);
    }
}

void Magasin::afficheClients() {
    for (int i = 0; i < _clients.size(); i++) {
        std::cout << _clients[i] << std::endl;
    }
}

Client& Magasin::afficheNomClient(std::string nom) {
    Client client;
    for (int i = 0; i < _clients.size(); i++) {
        if (_clients[i].getNom() == nom) {
            return _clients[i];
        }
    }
    return client;
}

void Magasin::ajoutProdPanier(Client& client, Produit& produit) {
    client.ajoutProduit(produit);
}

void Magasin::suppProdPanier(Client& client, Produit& produit) {
    client.supprimerProduit(produit);
}

void Magasin::changeQuantPanier(Client& client, Produit& produit, int quantite) {
    client.setQuantite(produit, quantite);
}

void Magasin::validerCommande(Commande& commande) {
    Client& client = commande.getClient2();
    std::vector <Produit> _panier = client.getPanier();
    commande.getProdCom() = _panier;

    //std::cout << commande.getProdCom().size() << std::endl;

    for (int i = 0; i < _panier.size(); i++) {
        std::cout << "i : " << i << std::endl;
        std::cout << _panier[i] << std::endl;
    }

    std::cout << "Commande validee" << std::endl;
}

void statutCommande(Commande& commande) {
    commande.setStatus(1);
}