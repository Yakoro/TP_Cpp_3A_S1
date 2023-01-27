#pragma once

#include <iostream>
#include <string>

class Produit {
public:
    Produit(std::string titre, std::string description, int quantite, double prixUnit);
    Produit();
    std::string getTitre();
    std::string getDescription();
    int getQuantite();
    double getPrixUnit();

    void setTitre(std::string titre);
    void setDescription(std::string description);
    void setQuantite(int quantite);
    void setPrixUnit(double prixUnit);


private:
    std::string _titre;
    std::string _description;
    int _quantite;
    double _prixUnit;

    friend std::ostream& operator<<(std::ostream& os, Produit& prod);
};

// bool operator == (Produit& p1, Produit& p2);