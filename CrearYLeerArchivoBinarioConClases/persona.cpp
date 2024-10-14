#include "persona.h"
#include <string.h>

Persona::Persona(char* nombre, int edad, float salario, int horasTrabajadas)
{
    this->nombre = nombre;
    this->edad = edad;
    this->salario = salario;
    this->horasTrabajadas = horasTrabajadas;
}

void Persona::setNombre(char *newNombre)
{
    nombre = new char(strlen(newNombre));
    strcpy(nombre, newNombre);
}

char *Persona::getNombre() const
{
    return nombre;
}

int Persona::getEdad() const
{
    return edad;
}

float Persona::getSalario() const
{
    return salario;
}

void Persona::setHorasTrabajadas(int newHorasTrabajadas)
{
    horasTrabajadas = newHorasTrabajadas;
}

int Persona::getHorasTrabajadas() const
{
    return horasTrabajadas;
}
