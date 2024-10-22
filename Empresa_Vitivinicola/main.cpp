#include <iostream>
#include "vino.h"
#include "demesa.h"
#include "gestorvinos.h"
#include "especial.h"
#include "premiun.h"

using namespace std;

int main()
{
    int año;
    GestorVinos *g1 = new GestorVinos(0);

    cout<<"ingrese el año a calcular: ";
    cin>>año;

    g1->setAnio(año);
    g1->leerArchi();

    cout<<"La cantidad de Lts que se vendieron en anio son " <<g1->ltsXAnio() <<" y el monto " <<g1->montoXAnio() <<endl;

    g1->crearArchitxt();

    return 0;
}
