#ifndef LIBRO_H
#define LIBRO_H
#include "ejemplar.h"
#include <vector>
using namespace std;

class Libro
{
private:
    int id;
    char* autor;
    char* nombre;

    vector<Ejemplar*> ejemplares;
public:
    Libro(int id, char* autor, char* nombre);
    void addEjemplar(Ejemplar *e);
    void cargarEjemplar();
    int getId() const;
    void setId(int newId);
    char *getAutor() const;
    void setAutor(char *newAutor);
    char *getNombre() const;
    void setNombre(char *newNombre);
    void crearArchivo();
};

#endif // LIBRO_H
