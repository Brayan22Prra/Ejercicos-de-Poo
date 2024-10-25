#ifndef PORCONSUMO_H
#define PORCONSUMO_H
#include "tarifa.h"

class PorConsumo : public Tarifa
{
private:
    int mega;
    float montoMega;
public:
    PorConsumo(int numero, char tipoTarifa, int mega, float montoMega);
    float calcularTarifa();
    int getNumero();
    char gettipoTarifa();
};

#endif // PORCONSUMO_H
