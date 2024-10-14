#ifndef GESTORPERSONAS_H
#define GESTORPERSONAS_H
#include "persona.h"
#include <vector>
using namespace std;

struct strPersona{
    char nombre[20];
    int edad;
    float salario;
};

struct strPer{
    char nombre[20];
    int edad;
    float salario;
    int horasTrabaj;
};

class GestorPersonas
{
private:
    vector<Persona> personas;
    int cant =0;
public:
    GestorPersonas();
    void leer();
    void addPersona(Persona *p);
    void mostrarDatos();
    int getCant() const;
    void setearHoras();
    void grabar();
    void grabarBin();
};

#endif // GESTORPERSONAS_H
