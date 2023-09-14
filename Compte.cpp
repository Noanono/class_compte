//
// Created by noah on 15/09/23.
//

#include "Compte.h"

Compte::Compte() {
    solde = 0;
}

Compte::Compte(float msolde) {
    solde = msolde;
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
