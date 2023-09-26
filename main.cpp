#include <iostream>
using namespace std;

#include "Compte_remun.h"

int main() {

    Compte_remun compte(100, 2);

    compte.crediter(50);
    compte.debiter(20);

    compte.afficher();

    compte.calculerInterets();

    compte.afficher();

    return 0;
}
