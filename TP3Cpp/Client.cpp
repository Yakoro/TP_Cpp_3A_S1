#include <iostream>
#include "Client.h"

Client::Client(std::string prenom, std::string nom, std::string id)
    : _prenom(prenom), _nom(nom), _id(id) {}

Client::Client() {}

std::string Client::getPrenom() {
    return _prenom;
}
std::string Client::getNom() {
    return _nom;
}
std::string Client::getId() {
    return _id;
}

void Client::setId(std::string id) {
    _id = id;
}
void Client::setPrenom(std::string prenom) {
    _prenom = prenom;
}
void Client::setNom(std::string nom) {
    _nom = nom;
}

void Client::ajoutProduit(Produit& p) {
    _panierAchat.push_back(p);
}

void Client::viderPanier() {
    _panierAchat.clear();
}

void Client::setQuantite(Produit& p, int quantite) {
    std::cout << _panierAchat.size() << std::endl;
    for (int i = 0; i < _panierAchat.size(); i++) {
        if (_panierAchat[i].getTitre() == p.getTitre()) {
            _panierAchat[i].setQuantite(quantite);
            std::cout << _panierAchat[i].getQuantite() << std::endl;
        }
    }
}

void Client::supprimerProduit(Produit& p) {
    for (int i = 0; i < _panierAchat.size(); i++) {
        if (_panierAchat[i].getTitre() == p.getTitre()) {
            _panierAchat.erase(_panierAchat.begin() + i);
        }
    }
}

std::ostream& operator << (std::ostream& os, Client& c) {
    os << "Informations client : " << std::endl;
    os << "Prenom : " << c.getPrenom() << std::endl;
    os << "Nom : " << c.getNom() << std::endl;
    os << "Panier : " << std::endl;
    std::vector<Produit> panier = c.getPanier();
    for (int i = 0; i < panier.size(); i++) {
        os << panier[i] << std::endl;
    }
    return os;
}

std::vector <Produit> Client::getPanier() {
    return _panierAchat;
}
