#include "katutaso.h"

Katutaso::Katutaso() {
    cout << "Katutaso-olio luotu" << endl;
    as1 = new Asunto;
    as2 = new Asunto;
}

Katutaso::~Katutaso() {
    delete as1;
    delete as2;
    as1 = nullptr;
    as2 = nullptr;
    cout << "Katutaso-olio tuhottu" << endl;
}

void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan katutasoon 2 asuntoa" << endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta) {
    return as1->laskeKulutus(hinta)
           + as2->laskeKulutus(hinta);
}
