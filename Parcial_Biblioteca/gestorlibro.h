#ifndef GESTORLIBRO_H
#define GESTORLIBRO_H
#include "libro.h"
#include <vector>
using namespace std;

class GestorLibro
{
private:
    vector<Libro*> libros;
public:
    GestorLibro();
    void addLibros(Libro *l);
    void cargarLibros();
    int buscarLibro();
};

#endif // GESTORLIBRO_H
