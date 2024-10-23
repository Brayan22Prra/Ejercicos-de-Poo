#include "gestorlibro.h"
#include "libro.h"
#include "ejemplar.h"
#include <iostream>
#include <string>
using namespace std;

GestorLibro::GestorLibro() {}

void GestorLibro::addLibros(Libro *l)
{
    this->libros.push_back(l);
}

void GestorLibro::cargarLibros()
{
    int id;
    char* autor;
    char* nombre;
    char dato = 's';

    while(dato != 'n'){
        Libro *l = new Libro(0, "o", "o");

        cout<<"ingrese el id de libro: ";
        cin>>id;
        cout<<"ingrese el autor del mismo: ";
        cin.ignore();
        cin.getline(autor, 10);
        cout<<"ingrese el nombre del libro: ";
        cin.ignore();
        cin.getline(nombre, 10);

        l->setId(id);
        l->setAutor(autor);
        l->setNombre(nombre);

        l->cargarEjemplar();

        cout<<"Desea cargar otro ejemplar del libro? s/n " <<endl;
        cin>>dato;

        this->addLibros(l);
    }
}

int GestorLibro::buscarLibro()
{
    char* dato;
    int ids;

    cout<<"ingrese el nombre del libro al buscar..";
    cin.getline(dato, 10);

    for(auto it = libros.begin(); it != libros.end(); ++it){
        if(dato == (*it)->getNombre()){
            ids = (*it)->getId();
        }
    }

    return ids;
}
