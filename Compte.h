//
// Created by noah on 15/09/23.
//

#ifndef CLASS_COMPTE_COMPTE_H
#define CLASS_COMPTE_COMPTE_H


class Compte {
public:
    Compte();
    Compte(float);
    /*  Role    : ajoute une somme au solde
    Entrees : 1 reel
    Sortie  : vide
     */
    void crediter(float);
    /*  Role    : retire une somme au solde
    Entrees : 1 reel
    Sortie  : vide
     */
    void debiter(float);
    /*  Role    : renvoi le solde
    Entrees : vide
    Sortie  : 1 entier, valeur du solde
     */
    float getSolde() const;

private:
    float solde;
};


#endif //CLASS_COMPTE_COMPTE_H
