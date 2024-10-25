#ifndef TARIFA_H
#define TARIFA_H


class Tarifa
{
protected:
    int numero;
    char tipoTarifa;
public:
    Tarifa(int numero, char tipoTarifa);
    virtual float calcularTarifa() = 0;
    virtual int getNumero() = 0;
    virtual char gettipoTarifa() = 0;
};

#endif // TARIFA_H
