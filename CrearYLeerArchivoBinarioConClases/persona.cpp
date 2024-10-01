#include "persona.h"
#include <fstream>

Persona::Persona(char* nombre, int edad, float salario)
{
    this->nombre = nombre;
    this->edad = edad;
    this->salario = salario;
}

Persona::Persona(){}

void Persona::leer()
{
    ifstream archivo("persona.dat", ios::binary);

    if(!archivo){
        cout<<"Error de lectura de archivo: " <<endl;
        exit(1);
    }

    strPersona p;

    while(archivo.read((char*)&p, sizeof(strPersona))){
        Persona unaPersona(p.nombre, p.edad, p.salario);
        addPersona(unaPersona);
    }
}

void Persona::addPersona(Persona p)
{
    this->personas.push_back(p);
}

void Persona::mostrar_datos()
{
    cout<<"Mostrando datos " <<endl;
    for(auto it = personas.begin(); it != personas.end(); ++it){
        cout<<"Nombre " <<it->nombre <<" Edad " <<it->edad <<" Salario " <<it->salario <<endl;
    }
}
