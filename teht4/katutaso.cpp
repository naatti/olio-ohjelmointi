#include <iostream>
#include "katutaso.h"

using namespace std;

Katutaso::Katutaso() {
    cout << "Katutaso-olio luotu" << endl;
}

Katutaso::~Katutaso() {
    cout << "Katutaso-olio tuhottu" << endl;
}

void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan katutasoon 2 asuntoa" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta) {
    return as1.laskeKulutus(hinta)
           + as2.laskeKulutus(hinta);
}
