#include "libro.h"
#include <iostream>
#include <fstream>
#include "gestorlibro.h"
using namespace std;

Libro::Libro(int id, char* autor, char* nombre)
{
    this->id = id;
    this->autor = autor;
    this->nombre = nombre;
}

void Libro::addEjemplar(Ejemplar *e)
{
    this->ejemplares.push_back(e);
}

void Libro::cargarEjemplar()
{
    double isbn;
    int año;
    char* editorial;
    char dato = 's';

    while(dato != 'n'){
        Ejemplar *e = new Ejemplar(0,0,"o", 0);

        cout<<"ingrese el isbn: ";
        cin>>isbn;
        cout<<"ingrese el año de imprecion: ";
        cin>>año;
        cout<<"ingrese la editorial: ";
        cin.ignore();
        cin.getline(editorial, 10);

        cout<<"Desea cargar otro ejemplar del libro? s/n " <<endl;
        cin>>dato;

        e->setIdej(this->id);
        e->setIsbn(isbn);
        e->setAñoImpreso(año);
        e->setEditorial(editorial);

        this->addEjemplar(e);
    }
}

int Libro::getId() const
{
    return id;
}

void Libro::setId(int newId)
{
    id = newId;
}

char *Libro::getAutor() const
{
    return autor;
}

void Libro::setAutor(char *newAutor)
{
    autor = newAutor;
}

char *Libro::getNombre() const
{
    return nombre;
}

void Libro::setNombre(char *newNombre)
{
    nombre = newNombre;
}

void Libro::crearArchivo()
{
    GestorLibro *g;
    int dato;

    ofstream archi("Libro.txt", ios::out);

    if(!archi){
        cout<<"Error al grabar el txt: " <<endl;
        exit(1);
    }

    dato = g->buscarLibro();

    for(auto it = ejemplares.begin(); it != ejemplares.end(); ++it){
        if((*it)->getIdej() == dato){
            archi<<(*it)->getIsbn() <<" " <<(*it)->getEditorial() <<" " <<(*it)->getAñoImpreso() <<endl;
        }
    }

    cout<<"Archivo creado con exito: " <<endl;

    archi.close();

}

