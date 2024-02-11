#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo-olio luotu" << endl;
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    cout << "Maaritetaan katutaso ja kaksi kerrosta" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo() {
    delete eka;
    delete toka;
    delete kolmas;
    eka = nullptr;
    toka = nullptr;
    kolmas = nullptr;
    cout << "Kerrostalo-olio tuhottu" << endl;
}

double Kerrostalo::laskeKulutus(double hinta) {
    return eka->laskeKulutus(hinta)
           + toka->laskeKulutus(hinta)
           + kolmas->laskeKulutus(hinta);
}
