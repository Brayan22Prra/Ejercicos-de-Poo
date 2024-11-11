#ifndef ALUMNADO_H
#define ALUMNADO_H
#include <vector>
using namespace std;
#include "alumno.h"

class Alumnado
{
private:
    vector<Alumno*> alumnos;
public:
    Alumnado();
    void cargarDatos();
    void addAlumnos(Alumno *a);
};

#endif // ALUMNADO_H
