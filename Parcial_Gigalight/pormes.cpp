#include "pormes.h"

PorMes::PorMes(int numero, char tipoTarifa, float montoFijo) : Tarifa(numero, tipoTarifa)
{
    this->montoFijo = montoFijo;
}

float PorMes::calcularTarifa()
{
    return this->montoFijo;
}

int PorMes::getNumero()
{
    return this->numero;
}

char PorMes::gettipoTarifa()
{
    return this->tipoTarifa;
}
