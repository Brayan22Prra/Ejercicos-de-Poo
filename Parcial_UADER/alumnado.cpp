#include "alumnado.h"
#include "alumno.h"
#include "nota.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

Alumnado::Alumnado(){}

void Alumnado::addNotas(Nota *n)
{
    notas.push_back(n);
}

void Alumnado::addAlumnos(Alumno *a)
{
    alumnos.push_back(a);
}

void Alumnado::leerBinAlumnos()
{
    ifstream archivo("Alumnos.dat", ios::binary);

    if(!archivo){
        cout<<"Error al leer bin Alumnos; " <<endl;
        exit(1);
    }

    strAlumno x;

    while(archivo.read((char*)&x, sizeof(strAlumno))){
        Alumno *unAlumno = new Alumno(x.legajo, "o", x.tipo);
        unAlumno->setNombre(x.nombre);
        this->addAlumnos(unAlumno);
    }

    archivo.close();

}

void Alumnado::leerBinNotas()
{
    ifstream archivo("Notas.dat", ios::binary);

    if(!archivo){
        cout<<"Error al leer bin Notas " <<endl;
        exit(1);
    }

    strNota n;

    while(archivo.read((char*)&n, sizeof(strNota))){
        Nota *unaNota = new Nota(n.legajo, n.nota);
        this->addNotas(unaNota);
    }

    archivo.close();

}

bool Alumnado::calPromedio(int legajo)
{
    int promedio = 0, aux = 0;

    for(auto it = notas.begin(); it != notas.end(); ++it){
        if(legajo == (*it)->getLegajo()){
            if((*it)->getNota() < 55){
                return false;
            } else {
                promedio += (*it)->getNota();
                aux++;
            }
        }
    }
    promedio = promedio / aux;

    if((promedio >= 60) && (aux > 1)){
        return true;
    }else if((aux == 1) && (promedio >= 70)){
        return true;
    }else {
        return false;
    }

}

void Alumnado::mostrarDatos()
{
    for(auto it = alumnos.begin(); it != alumnos.end(); ++it){
        if(this->calPromedio((*it)->getLegajo()) == true){
           cout<<(*it)->getNombre() <<" Aprobo " <<endl;
        }else{
            cout<<(*it)->getNombre() <<" Desaprobo " <<endl;
        }
    }
}

void Alumnado::crearTXT()
{
    ofstream archivo("Alumnos.txt", ios::out);

    if(!archivo){
        cout<<"Error al grabar TXT. " <<endl;
        exit(1);
    }

    for(auto it = alumnos.begin(); it != alumnos.end(); ++it){
        if(this->calPromedio((*it)->getLegajo()) == true){
           archivo<<(*it)->getNombre() <<" Aprobo " <<endl;
        }else{
            archivo<<(*it)->getNombre() <<" Desaprobo " <<endl;
        }
    }

    archivo.close();

}
