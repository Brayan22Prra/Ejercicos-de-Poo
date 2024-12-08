#ifndef AVION_H
#define AVION_H
#include "viaje.h"

class Avion : public Viaje
{
public:
    Avion(float precio, float horas);
    float calcularMonto();
    float calcularHoras();
};

#endif // AVION_H
