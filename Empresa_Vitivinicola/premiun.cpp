#include "premiun.h"

Premiun::Premiun(int numero, char tipo, int cantLts, int anioProduc) : Vino(numero, tipo, cantLts, anioProduc){}

double Premiun::calcularLts()
{
    double monto;
    monto = this->cantLts * 200;
    return monto;
}
