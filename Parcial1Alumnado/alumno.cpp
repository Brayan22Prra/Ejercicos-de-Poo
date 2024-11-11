#include "alumno.h"
#include <iostream>
#include <vector>
using namespace std;

Alumno::Alumno(string NyA, long DNI)
{
    this->NyA = NyA;
    this->DNI = DNI;
}

void Alumno::cargarNotas()
{
    int nota;

    cout<<"ingrese las notas del alumno: " <<endl;
    cin>>nota;
    this->addNotas(nota);
}

void Alumno::addNotas(int n)
{
    notas.push_back(n);
}

int Alumno::calcularPromedio()
{
    int promedio = 0;

    for(int i=0; i<3; i++){ //Ver segun cantidad de notas
        promedio += this->notas[i];
    }

    return promedio;
}

void Alumno::mostrarDatos()
{
    if(this->calcularPromedio() > 55){
        cout<<"Alumno: " <<this->NyA <<" Libre " <<endl;
    }else if((this->calcularPromedio() < 55) || (this->calcularPromedio() > 75)){
        cout<<"Alumno: " <<this->NyA <<" Regular " <<endl;
    }else {
        cout<<"Alumno: " <<this->NyA <<" Promociono " <<endl;
    }
}
