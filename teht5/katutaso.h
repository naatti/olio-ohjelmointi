#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>

#include "kerros.h"

using namespace std;

class Katutaso : public Kerros {
public:
    Katutaso();
    virtual ~Katutaso();
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double) override;

private:
    Asunto* as1;
    Asunto* as2;
};

#endif // KATUTASO_H
