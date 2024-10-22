#include "vino.h"

Vino::Vino(int numero, char tipo, int cantLts, int anioProduc)
{
    this->numero = numero;
    this->tipo = tipo;
    this->cantLts = cantLts;
    this->anioProduc = anioProduc;
}

int Vino::getNumero() const
{
    return numero;
}

char Vino::getTipo() const
{
    return tipo;
}

int Vino::getCantLts() const
{
    return cantLts;
}

int Vino::getAnioProduc() const
{
    return anioProduc;
}
