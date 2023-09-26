//
// Created by noah on 26/09/23.
//

#include "Compte.h"

#ifndef CLASS_COMPTE_COMPTE_REMUN_H
#define CLASS_COMPTE_COMPTE_REMUN_H


class Compte_remun : public Compte{

private:
    float taux;

public:
    Compte_remun(float =0, float =0);
    ~Compte_remun();
    /*  Role    : afficher le solde et le taux
    Entrees : vide
    Sortie  : vide
     */
    void afficher() const;
    /*  Role    : calculer les interets
    Entrees : vide
    Sortie  : 1 reel, valeur des interets
     */
    void calculerInterets();
    float getTaux() const;
    void setTaux(float);

};


#endif //CLASS_COMPTE_COMPTE_REMUN_H
