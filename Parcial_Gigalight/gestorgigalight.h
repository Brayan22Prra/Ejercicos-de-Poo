#ifndef GESTORGIGALIGHT_H
#define GESTORGIGALIGHT_H
#include <iostream>
#include <vector>
#include "tarifa.h"
using namespace std;

struct strCliente{
    int numero;
    char tipo;
    float monto;
};

class GestorGigalight
{
    vector<Tarifa*> tarifas;
public:
    GestorGigalight();
    void addTarifa(Tarifa *t);
    void cargarDatos();
    void crearArchivo();
    void topFive();

    void mostrarBin();
};

#endif // GESTORGIGALIGHT_H
