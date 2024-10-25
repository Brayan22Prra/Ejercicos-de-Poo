#include <iostream>
#include "gestorgigalight.h"

using namespace std;

int main()
{
    GestorGigalight *g = new GestorGigalight;

    g->cargarDatos();
    g->crearArchivo();
    g->topFive();

    g->mostrarBin();

    return 0;
}
