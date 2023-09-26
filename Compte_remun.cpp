//
// Created by noah on 26/09/23.
//
#include <iostream>
using namespace std;

#include "Compte_remun.h"

Compte_remun::Compte_remun(float msolde, float mtaux) : Compte(msolde) {
    taux = mtaux;
}

Compte_remun::~Compte_remun() {
    cout << "Destruction du compte remunere" << endl;
}

void Compte_remun::afficher() const {
    Compte::afficher(); //Je veux pas faire de la recurcivité, je maitrise bien donc j'appelle le afficher du compte
    cout << "Le taux du compte est de " << taux << "%" << endl;
}

void Compte_remun::calculerInterets(){
    setSolde(getSolde() + getSolde() * taux / 100);
}

float Compte_remun::getTaux() const {
    return taux;
}

void Compte_remun::setTaux(float mtaux) {
    taux = mtaux;
}
