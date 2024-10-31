#include "nota.h"

Nota::Nota(int legajo, int nota)
{
    this->legajo = legajo;
    this->nota = nota;
}

int Nota::getLegajo() const
{
    return legajo;
}

int Nota::getNota() const
{
    return nota;
}
