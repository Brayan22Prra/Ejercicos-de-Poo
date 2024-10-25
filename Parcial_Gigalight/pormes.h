#ifndef PORMES_H
#define PORMES_H
#include "tarifa.h"

class PorMes : public Tarifa
{
private:
    float montoFijo;
public:
    PorMes(int numero, char tipoTarifa, float montoFijo);
    float calcularTarifa();
    int getNumero();
    char gettipoTarifa();
};

#endif // PORMES_H
