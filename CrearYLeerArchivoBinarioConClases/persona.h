#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

class Persona
{
private:
    //Lee-------------
    char* nombre;
    int edad;
    float salario;
    //Escribe--------------
    int horasTrabajadas;

public:
    Persona(char* nombre, int edad, float salario, int horasTrabajadas);
    void setNombre(char *newNombre);
    char *getNombre() const;
    int getEdad() const;
    float getSalario() const;
    void setHorasTrabajadas(int newHorasTrabajadas);
    int getHorasTrabajadas() const;
};

#endif // PERSONA_H
