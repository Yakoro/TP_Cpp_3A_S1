#include "Commande.h"

Commande::Commande(Client client, bool status) :
    _client(client), _status(status) {}

Client& Commande::getClient2() {
    return _client;
}

bool Commande::getStatus() {
    return _status;
}

std::vector <Produit> Commande::getProdCom() {
    return _prodCom;
}

void Commande::setStatus(int statut) {
    _status = statut;
}

std::ostream& operator<<(std::ostream& os, Commande& commande) {

    os << "Statut de la commande : " << commande.getStatus() << std::endl;
    os << "Produits commandes : " << std::endl;
    std::vector<Produit> prodCommandes = commande.getProdCom();
    for (int i = 0; i < prodCommandes.size(); i++) {
        os << prodCommandes[i] << std::endl;
    }

    return os;
}