#ifndef MIXTA_H
#define MIXTA_H
#include "tarifa.h"
#include <iostream>
#include <vector>
using namespace std;


class Mixta : public Tarifa
{
private:
    int auxMegas;
    int auxHoras;
    float auxMontoHoras;
    float auxMontoMegas;
    float auxMontoFijo;

    vector<float> montos;
public:
    Mixta(int numero, char tipoTarifa, float auxMontoFijo, int auxHoras, float auxMontoHoras,  int auxMegas, float auxMontoMegas);
    float calcularTarifa();
    int getNumero();
    char gettipoTarifa();
    void ordenarVector();
};

#endif // MIXTA_H
