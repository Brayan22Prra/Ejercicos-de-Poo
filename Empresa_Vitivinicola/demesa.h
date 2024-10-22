#ifndef DEMESA_H
#define DEMESA_H
#include "vino.h"

class DeMesa : public Vino
{
public:
    DeMesa(int numero, char tipo, int cantLts, int anioProduc);
    double calcularLts();
};

#endif // DEMESA_H
