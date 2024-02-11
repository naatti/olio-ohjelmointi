//#include "asunto.h"
//#include "katutaso.h"
//#include "kerros.h"
#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main() {
  double hinta = 1;

  // Asunto-olion testaus
  //  Asunto* asunto1;
  //  asunto1 = new Asunto;
  //  asunto1->maarita(2, 100);
  //  cout << "Kulutus = " << asunto1->laskeKulutus(hinta)
  //       << ", kun hinta = " << hinta << endl;

  // Kerros-olion testaus
  //  Kerros* kerros1;
  //  kerros1 = new Kerros;
  //  kerros1->maaritaAsunnot();
  //  cout << "Kerroksen kulutus = " << kerros1->laskeKulutus(hinta)
  //       << ", kun hinta = " << hinta << endl;

  // Katutaso-olion testaus
  //  Katutaso *katutaso1;
  //  katutaso1 = new Katutaso;
  //  katutaso1->maaritaAsunnot();
  //  cout << "Katutason kulutus = " << katutaso1->laskeKulutus(hinta)
  //       << ", kun hinta = " << hinta << endl;

  // Kerrostalo-olion testaus
  Kerrostalo* kerrostalo1;
  kerrostalo1 = new Kerrostalo;
  kerrostalo1->laskeKulutus(hinta);
  cout << "Kerrostalon kulutus = " << kerrostalo1->laskeKulutus(hinta)
       << ", kun hinta = " << hinta << endl;
  return 0;
}
