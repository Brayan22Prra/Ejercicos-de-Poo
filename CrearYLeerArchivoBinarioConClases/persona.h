#ifndef PERSONA_H
#define PERSONA_H
#include <vector>
#include <iostream>
using namespace std;

struct strPersona{
    char nombre[20];
    int edad;
    float salario;
};

class Persona
{
private:
    char* nombre;
    int edad;
    float salario;

    vector<Persona> personas;

public:
    Persona(char* nombre, int edad, float salario);
    Persona();
    void leer();
    void addPersona(Persona p);
    void mostrar_datos();

};

#endif // PERSONA_H
