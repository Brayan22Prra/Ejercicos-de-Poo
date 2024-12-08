#ifndef VIAJE_H
#define VIAJE_H


class Viaje
{
protected:
float precio;
float horas;
public:
    Viaje(float precio, float horas);

    virtual float calcularMonto() = 0;
    virtual float calcularHoras() = 0;
};

#endif // VIAJE_H
