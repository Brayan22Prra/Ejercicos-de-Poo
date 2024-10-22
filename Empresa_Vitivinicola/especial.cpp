#include "especial.h"

Especial::Especial(int numero, char tipo, int cantLts, int anioProduc) : Vino(numero, tipo, cantLts, anioProduc){}

double Especial::calcularLts()
{
    double monto;
    monto = this->cantLts * 320;
    return monto;
}
