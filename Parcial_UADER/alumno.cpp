#include "alumno.h"
#include <string.h>

Alumno::Alumno(int legajo, char* nombre, char tipo)
{
    this->legajo = legajo;
    this->nombre = nombre;
    this->tipo = tipo;
}

int Alumno::getLegajo() const
{
    return legajo;
}

char *Alumno::getNombre() const
{
    return nombre;
}

void Alumno::setNombre(char *newNombre)
{
    nombre = new char(strlen(newNombre));
    strcpy(nombre, newNombre);
}

char Alumno::getTipo() const
{
    return tipo;
}
