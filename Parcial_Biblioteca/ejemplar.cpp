#include "ejemplar.h"

Ejemplar::Ejemplar(double isbn, int añoImpreso, char* editorial, int idej)
{
    this->isbn = isbn;
    this->añoImpreso = añoImpreso;
    this->editorial = editorial;
    this->idej = idej;
}

double Ejemplar::getIsbn() const
{
    return isbn;
}

void Ejemplar::setIsbn(double newIsbn)
{
    isbn = newIsbn;
}

int Ejemplar::getAñoImpreso() const
{
    return añoImpreso;
}

void Ejemplar::setAñoImpreso(int newAñoImpreso)
{
    añoImpreso = newAñoImpreso;
}

char *Ejemplar::getEditorial() const
{
    return editorial;
}

void Ejemplar::setEditorial(char *newEditorial)
{
    editorial = newEditorial;
}

int Ejemplar::getIdej() const
{
    return idej;
}

void Ejemplar::setIdej(int newIdej)
{
    idej = newIdej;
}
