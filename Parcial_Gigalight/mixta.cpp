#include "mixta.h"
#include <algorithm>

Mixta::Mixta(int numero, char tipoTarifa, float auxMontoFijo, int auxHoras, float auxMontoHoras,  int auxMegas, float auxMontoMegas) : Tarifa(numero, tipoTarifa)
{
    this->auxMegas = auxMegas;
    this->auxHoras = auxHoras;
    this->auxMontoHoras = auxMontoHoras;
    this->auxMontoMegas = auxMontoMegas;
    this->auxMontoFijo = auxMontoFijo;
}

float Mixta::calcularTarifa()
{
    float xHora, xMega;

    montos.push_back(auxMontoFijo);
    xHora = auxHoras * auxMontoHoras;
    montos.push_back(xHora);
    xMega = auxMegas * auxMontoMegas;
    montos.push_back(xMega);

    this->ordenarVector();

    return this->montos[0];
}

int Mixta::getNumero()
{
    return this->numero;
}

char Mixta::gettipoTarifa()
{
    return this->tipoTarifa;
}

void Mixta::ordenarVector()
{
    sort(montos.begin(), montos.end(), [](int a, int b){
        return a > b;
    });
}
