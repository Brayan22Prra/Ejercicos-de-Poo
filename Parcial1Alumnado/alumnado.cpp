#include "alumnado.h"
#include "alumno.h"
#include <iostream>
using namespace std;

Alumnado::Alumnado() {}

void Alumnado::cargarDatos()
{
    string nya;
    long dni;
    char dato = 's';
    cout<<"Ingrese los datos de los alumnos " <<endl;

    while(dato != 'n'){
        cout<<"ingrese el nombre de la persona: " <<endl;
        cin.ignore();
        getline(cin, nya);
        cout<<"ingrese el DNI de la persona: " <<endl;
        cin>>dni;

        Alumno *a = new Alumno(nya, dni);

        while(dato != 'n'){
            a->cargarNotas();
            cout<<"desea cargar otra nota? (s / n)";
            cin>>dato;
        }

        cout<<"Desea cargar otro alumno? (s / n)";
        cin>>dato;
    }
}

void Alumnado::addAlumnos(Alumno *a)
{
    alumnos.push_back(a);
}
