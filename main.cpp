#include <iostream>
using namespace std;

#include "Compte.h"

int main() {

    Compte compte(100);

    compte.crediter(50);
    compte.debiter(20);

    cout << "Le solde du compte est de " << compte.getSolde() << "€" << endl;

    return 0;
}
