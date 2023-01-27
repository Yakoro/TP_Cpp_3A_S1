#pragma once

#include<iostream>
#include "Client.h"
#include <vector>

class Commande {
public:
    Commande(Client client, bool status);
    Client& getClient2();
    bool getStatus();
    std::vector <Produit> getProdCom();
    void setStatus(int statut);

private:
    Client _client;
    bool _status;

    std::vector <Produit> _prodCom;

    friend std::ostream& operator<<(std::ostream& os, Commande& c);
};

