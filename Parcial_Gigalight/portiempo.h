#ifndef PORTIEMPO_H
#define PORTIEMPO_H
#include "tarifa.h"


class PorTiempo : public Tarifa
{
private:
    int horas;
    float montoHoras;
public:
    PorTiempo(int numero, char tipoTarifa, int horas, float montoHoras);
    float calcularTarifa();
    int getNumero();
    char gettipoTarifa();
};

#endif // PORTIEMPO_H
