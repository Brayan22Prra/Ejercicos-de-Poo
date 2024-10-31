#include <iostream>
#include "alumnado.h"

using namespace std;

int main()
{

    Alumnado *a = new Alumnado();

    a->leerBinAlumnos();
    a->leerBinNotas();
    a->mostrarDatos();
    a->crearTXT();

    return 0;
}
