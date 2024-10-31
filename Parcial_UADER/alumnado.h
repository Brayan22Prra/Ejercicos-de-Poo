#ifndef ALUMNADO_H
#define ALUMNADO_H
#include "alumno.h"
#include "nota.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct strNota{
    int legajo;
    int nota;
};

struct strAlumno{
    int legajo;
    char nombre[20];
    char tipo;
};

class Alumnado
{
private:
    vector<Alumno*> alumnos;
    vector<Nota*> notas;
    int cont = 0;
public:
    Alumnado();
    void addNotas(Nota *n);
    void addAlumnos(Alumno *a);
    void leerBinAlumnos();
    void leerBinNotas();
    bool calPromedio(int legajo);
    void mostrarDatos();
    void crearTXT();
};

#endif // ALUMNADO_H
