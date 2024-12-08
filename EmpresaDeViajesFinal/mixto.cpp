#include "mixto.h"

Mixto::Mixto(float precio, float horas) : Viaje(precio, horas){}

float Mixto::calcularMonto()
{
    for(auto it = mixtos.begin(); it != mixtos.end(); ++it){
        this->precio = (*it)->calcularMonto();
    }
    return precio;
}

float Mixto::calcularHoras()
{
    for(auto it = mixtos.begin(); it != mixtos.end(); ++it){
        this->horas = (*it)->calcularHoras();
    }
    return horas;
}

void Mixto::addMixto(Viaje *m)
{
    this->mixtos.push_back(m);
}
