#include "italianchef.h"

// Member initialization osuutta ei ole kurssilla opetettu,
// apua haettu täältä https://cplusplus.com/doc/tutorial/classes/

ItalianChef::ItalianChef(string nome, int acqua, int farina) : Chef(nome) {
  name = nome;
  vesi = acqua;
  jauhot = farina;
  cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
  cout << "ItalianChef " << name << " destruktori" << endl;
}

string ItalianChef::getName() { return name; }

void ItalianChef::makePasta() {
  //  cout << "Chef " << name << " makes pasta" << endl;

  // Alla osassa 4 tehdyt muutokset, yllä kommentoituna osassa 3 vaadittu
  // toiminta
  cout << "Chef " << name << " makes pasta with special recipe" << endl;
  cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
  cout << "Chef " << name << " uses vesi = " << vesi << endl;
}
