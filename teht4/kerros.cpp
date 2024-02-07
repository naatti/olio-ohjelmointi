#include <iostream>
#include "kerros.h"

using namespace std;

Kerros::Kerros() {
    cout << "Kerros-olio luotu" << endl;
}

Kerros::~Kerros() {
    cout << "Kerros-olio tuhottu" << endl;
}

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan kerrokseen 4 asuntoa" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta) {
    return as1.laskeKulutus(hinta)
           + as2.laskeKulutus(hinta)
           + as3.laskeKulutus(hinta)
           + as4.laskeKulutus(hinta);
}
