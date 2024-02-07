#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto() {
    cout << "Asunto-olio luotu" << endl;
}

Asunto::~Asunto() {
    cout << "Asunto-olio tuhottu" << endl;
}

void Asunto::maarita(int newAsukasmaara, int newNeliot) {
    asukasMaara = newAsukasmaara;
    neliot = newNeliot;
    cout << "Maaritetty: asukasMaara = " << asukasMaara << ", neliot = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta) {
    return hinta * asukasMaara * neliot;
}
