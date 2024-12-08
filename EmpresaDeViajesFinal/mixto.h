#ifndef MIXTO_H
#define MIXTO_H
#include "viaje.h"
#include "vector"
#include <iostream>
using namespace std;

class Mixto : public Viaje
{
private:
    vector<Viaje*> mixtos;
public:
    Mixto(float precio, float horas);
    float calcularMonto();
    float calcularHoras();
    void addMixto(Viaje *m);
};

#endif // MIXTO_H
