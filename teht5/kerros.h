#ifndef KERROS_H
#define KERROS_H
#include <iostream>
#include "asunto.h"

using namespace std;

class Kerros {
public:
    Kerros();
    virtual ~Kerros();
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double);

private:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
};

#endif // KERROS_H
