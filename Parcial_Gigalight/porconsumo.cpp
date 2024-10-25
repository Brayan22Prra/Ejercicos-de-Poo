#include "porconsumo.h"

PorConsumo::PorConsumo(int numero, char tipoTarifa, int mega, float montoMega) : Tarifa(numero, tipoTarifa)
{
    this->mega = mega;
    this->montoMega = montoMega;
}

float PorConsumo::calcularTarifa()
{
    float totalConsumo;
    totalConsumo = this->mega * this->montoMega;
    return totalConsumo;
}

int PorConsumo::getNumero()
{
    return this->numero;
}

char PorConsumo::gettipoTarifa()
{
    return this->tipoTarifa;
}
