#include "demesa.h"

DeMesa::DeMesa(int numero, char tipo, int cantLts, int anioProduc) : Vino(numero, tipo, cantLts, anioProduc) {}

double DeMesa::calcularLts()
{
    double monto;
    monto = this->cantLts * 120;
    return monto;
}
