//
// Created by noah on 15/09/23.
//

#ifndef CLASS_COMPTE_COMPTE_H
#define CLASS_COMPTE_COMPTE_H


class Compte {

private:
    float solde;

public:
    Compte(float =0);
    ~Compte();
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
    /*  Role    : affiche le solde
    Entrees : vide
    Sortie  : vide
     */
    void afficher() const;
    float getSolde() const;
    void setSolde(float);

};


#endif //CLASS_COMPTE_COMPTE_H
