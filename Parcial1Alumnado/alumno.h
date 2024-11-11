#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
#include <vector>
using namespace std;

class Alumno
{
private:
    string NyA;
    long DNI;
    vector<int> notas;
public:
    Alumno(string NyA, long DNI);
    void cargarNotas();
    void addNotas(int n);
    int calcularPromedio();
    void mostrarDatos();
};

#endif // ALUMNO_H
