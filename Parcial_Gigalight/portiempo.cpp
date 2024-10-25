#include "portiempo.h"

PorTiempo::PorTiempo(int numero, char tipoTarifa, int horas, float montoHoras) :  Tarifa(numero, tipoTarifa)
{
    this->horas = horas;
    this->montoHoras = montoHoras;
}

float PorTiempo::calcularTarifa()
{
    float montoTotal;
    montoTotal = this->horas * this->montoHoras;
    return montoTotal;
}

int PorTiempo::getNumero()
{
    return this->numero;
}

char PorTiempo::gettipoTarifa()
{
    return this->tipoTarifa;
}
