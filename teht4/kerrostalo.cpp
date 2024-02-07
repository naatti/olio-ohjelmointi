#include <iostream>
#include "kerrostalo.h"

using namespace std;

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo-olio luotu" << endl;
    cout << "Maaritetaan katutaso ja kaksi kerrosta" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo() {
    cout << "Kerrostalo-olio tuhottu" << endl;
}

double Kerrostalo::laskeKulutus(double hinta) {
    return eka.laskeKulutus(hinta)
        + toka.laskeKulutus(hinta)
        + kolmas.laskeKulutus(hinta);
}
