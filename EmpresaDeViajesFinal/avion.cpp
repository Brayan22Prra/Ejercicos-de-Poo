#include "avion.h"

Avion::Avion(float precio, float horas) : Viaje(precio, horas){}

float Avion::calcularMonto()
{
    float aux = this->precio * 0.20;
    this->precio += aux;
    return this->precio;
}

float Avion::calcularHoras()
{
    float aux = this->horas + 2;
    this->horas = aux;
    return this->horas;
}
