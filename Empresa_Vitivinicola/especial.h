#ifndef ESPECIAL_H
#define ESPECIAL_H
#include "vino.h"

class Especial : public Vino
{
public:
    Especial(int numero, char tipo, int cantLts, int anioProduc);
    double calcularLts();
};

#endif // ESPECIAL_H
