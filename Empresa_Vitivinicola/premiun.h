#ifndef PREMIUN_H
#define PREMIUN_H
#include "vino.h"

class Premiun : public Vino
{
public:
    Premiun(int numero, char tipo, int cantLts, int anioProduc);
    double calcularLts();
};

#endif // PREMIUN_H
