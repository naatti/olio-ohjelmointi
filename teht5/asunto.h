#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

class Asunto {
public:
    int asukasMaara;
    int neliot;
    Asunto();
    ~Asunto();
    void maarita(int, int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
