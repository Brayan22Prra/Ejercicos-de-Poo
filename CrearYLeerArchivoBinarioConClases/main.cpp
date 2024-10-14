#include <iostream>
#include "persona.h"
#include "gestorpersonas.h"

using namespace std;

int main()
{
    GestorPersonas *g1 = new GestorPersonas();

    g1->leer();
    g1->mostrarDatos();
    g1->setearHoras();
    g1->grabar();
    g1->grabarBin();

}
