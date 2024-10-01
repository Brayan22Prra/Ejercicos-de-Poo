#include <iostream>
#include "persona.h"

using namespace std;

int main()
{
    Persona *p1 = new Persona();

    p1->leer();
    p1->mostrar_datos();

}
