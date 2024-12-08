#ifndef COLECTIVO_H
#define COLECTIVO_H
#include <viaje.h>

class Colectivo : public Viaje
{
private:
    float km;
public:
    Colectivo(float km, float precio, float horas);
    float calcularMonto();
    float calcularHoras();
};

#endif // COLECTIVO_H
