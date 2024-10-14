#include "gestorpersonas.h"
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

GestorPersonas::GestorPersonas(){}

void GestorPersonas::leer()
{
    ifstream archivo("persona.dat", ios::binary);

    if(!archivo){
        cout<<"Error de lectura de archivo: " <<endl;
        exit(1);
    }

    strPersona p;

    while(archivo.read((char*)&p, sizeof(strPersona))){
        Persona *unaPersona = new Persona(p.nombre, p.edad, p.salario, 0);
        unaPersona->setNombre(p.nombre);
        this->addPersona(unaPersona);
    }

    archivo.close();
}

void GestorPersonas::addPersona(Persona *p)
{
    this->personas.push_back(*p);
    this->cant++;
}

void GestorPersonas::mostrarDatos()
{
    cout<<"Mostrando datos: " <<endl;
    for(auto it = personas.begin(); it != personas.end(); ++it){
        cout<<"Nombre " <<it->getNombre() <<" Edad " <<it->getEdad() <<" Salario " <<it->getSalario() <<endl;
    }
}

int GestorPersonas::getCant() const
{
    return cant;
}

void GestorPersonas::setearHoras()
{
    int horas;
    for(auto it = personas.begin(); it != personas.end(); ++it){
        cout<<"Ingrese las horas trabajadas de " <<it->getNombre() <<endl;
        cin>>horas;
        it->setHorasTrabajadas(horas);
    }
}

void GestorPersonas::grabar()
{
    ofstream archi("Personastxt.txt", ios::out);

    if(!archi){
        cout<<"Error al Grabar el archivo: " <<endl;
        exit(1);
    }

    for(auto it = personas.begin(); it != personas.end(); ++it){
        archi<<it->getNombre() <<" " <<it->getEdad() <<" " <<it->getSalario() <<" " <<it->getHorasTrabajadas() <<endl;
    }

    archi.close();

    cout<<"Archivo grabado con exito..." <<endl;

}

void GestorPersonas::grabarBin()
{
    ofstream archivo("ArchiBin.dat", ios::binary);

    if(!archivo){
        cout<<"Erro al grabar... " <<endl;
        exit(1);
    }

    strPer p;

    for(auto it = personas.begin(); it != personas.end();  ++it){
        strcpy(p.nombre, it->getNombre());
        p.edad = it->getEdad();
        p.salario = it->getSalario();
        p.horasTrabaj = it->getHorasTrabajadas();

        archivo.write((char*)(&p), sizeof(strPer));
    }

    archivo.close();

    cout<<"Archivo Bin grabado con exito: " <<endl;
}
