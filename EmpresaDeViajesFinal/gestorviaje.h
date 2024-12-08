#ifndef GESTORVIAJE_H
#define GESTORVIAJE_H
#include <vector>
#include <iostream>
#include "viaje.h"
using namespace std;


class GestorViaje
{
private:
    vector<Viaje*> viajes;
public:
    GestorViaje();
    void cargarViaje();
    void addViaje(Viaje *v);
    void mostrarDatos();

};

#endif // GESTORVIAJE_H
