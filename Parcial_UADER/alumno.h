#ifndef ALUMNO_H
#define ALUMNO_H
#include <vector>
#include "nota.h"
using namespace std;

class Alumno
{
private:
    int legajo;
    char* nombre;
    char tipo;
public:
    Alumno(int legajo, char* nombre, char tipo);
    int getLegajo() const;
    char *getNombre() const;
    void setNombre(char *newNombre);
    char getTipo() const;
};

#endif // ALUMNO_H
