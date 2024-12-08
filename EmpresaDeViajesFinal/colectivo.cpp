#include "colectivo.h"

Colectivo::Colectivo(float km, float precio, float horas) : Viaje(precio, horas)
{
    this->km = km;
}

float Colectivo::calcularMonto()
{
    this->precio = km * 8;
    return this->precio;
}

float Colectivo::calcularHoras()
{
    return this->horas;
}
