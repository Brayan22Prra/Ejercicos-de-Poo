#include <iostream>
#include <gestorviaje.h>

using namespace std;

int main()
{
    GestorViaje *g = new GestorViaje();

    g->cargarViaje();
    g->mostrarDatos();

    return 0;
}
