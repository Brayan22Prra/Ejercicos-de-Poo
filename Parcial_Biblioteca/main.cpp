#include <iostream>
#include "gestorlibro.h"
#include "libro.h"
#include "ejemplar.h"

using namespace std;

int main()
{
    Libro *l;
    GestorLibro *g;

    g->cargarLibros();
    l->crearArchivo();

    return 0;
}
