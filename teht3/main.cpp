#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main() {
  cout << "Olio-ohjelmoinnin kotitehtava 3" << endl;

  //  cout << "******************************" << endl;
  //  cout << "Osat 1 ja 2:" << endl;

  //  // Luodaan kaksi oliota ja kutsutaan jäsenfunktioita
  //  Chef ramsay("Gordon Ramsay");
  //  ramsay.makeSalad();
  //  ramsay.makeSoup();

  //  Chef bourdain("Anthony Bourdain");
  //  bourdain.makeSalad();
  //  bourdain.makeSoup();

  //  cout << "******************************" << endl;
  //  cout << "Osa 3:" << endl;

  //  Chef jyrki("Jyrki");
  //  ItalianChef mario("Mario");
  //  jyrki.makeSalad();
  //  mario.makePasta();
  //  jyrki.makeSoup();

  cout << "******************************" << endl;
  cout << "Osa 4:" << endl;

  ItalianChef mario("Mario", 250, 100);
  mario.makePasta();

  cout << "******************************" << endl;

  return 0;
}
