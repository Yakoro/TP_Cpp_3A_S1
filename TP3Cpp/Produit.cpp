#include "Produit.h"

Produit::Produit(std::string titre, std::string description, int quantite, double prixUnit) :
    _titre(titre), _description(description), _quantite(quantite), _prixUnit(prixUnit) {
}

Produit::Produit() {}

std::string Produit::getTitre() {
    return _titre;
}
std::string Produit::getDescription() {
    return _description;
}
int Produit::getQuantite() {
    return _quantite;
}
double Produit::getPrixUnit() {
    return _prixUnit;
}

void Produit::setTitre(std::string titre) {
    _titre = titre;
}
void Produit::setDescription(std::string description) {
    _description = description;
}
void Produit::setQuantite(int quantite) {
    _quantite = quantite;
}
void Produit::setPrixUnit(double prixUnit) {
    _prixUnit = prixUnit;
}

std::ostream& operator<<(std::ostream& os, Produit& prod) {
    os << prod.getTitre() << std::endl;
    os << prod.getDescription() << std::endl;
    os << prod.getPrixUnit() << std::endl;
    os << prod.getQuantite() << std::endl;

    return os;
}

/*bool operator == (Produit& p1, Produit& p2) {
    if ((p1.getTitre() == p2.getTitre()) &&
     (p1.getDescription() == p2.getDescription()) &&
      (p1.getPrixUnit() == p2.getPrixUnit()) &&
      (p1.getQuantite() == p2.getQuantite())){
        return true;
      }
      return false;
}*/


/*void Produit:: operator << (Produit& p){
    std::cout << p.getTitre() << std::endl;
    std::cout << p.getDescription() << std::endl;
    std::cout << p.getPrixUnit() << std::endl;
    std::cout << p.getQuantite() << std::endl;
}*/