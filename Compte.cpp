//
// Created by noah on 15/09/23.
//
#include <iostream>
using namespace std;

#include "Compte.h"

Compte::Compte(float msolde) {
    solde = msolde;
}

Compte::~Compte() {
    cout << "Destruction du compte" << endl;
}

void Compte::crediter(float msolde) {
    solde += msolde;
}

void Compte::debiter(float msolde) {
    solde -= msolde;
}

float Compte::getSolde() const {
    return solde;
}

void Compte::afficher() const {
    cout << "Le solde du compte est de " << solde << "€" << endl;
}

void Compte::setSolde(float msolde) {
    solde = msolde;
}
