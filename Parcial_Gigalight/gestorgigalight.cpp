#include "gestorgigalight.h"
#include <iostream>
#include "porconsumo.h"
#include "pormes.h"
#include "portiempo.h"
#include "tarifa.h"
#include "mixta.h"
#include <fstream>
#include <algorithm>
using namespace std;

GestorGigalight::GestorGigalight(){}

void GestorGigalight::addTarifa(Tarifa *t)
{
    this->tarifas.push_back(t);
}

void GestorGigalight::cargarDatos()
{
    int num, hora, megas;
    float montoHora, montoMensual, montoMega;
    char tipo, dato = 's';

    while(dato != 'n'){
        cout<<"Ingrese el numero de cliente: ";
        cin>>num;
        cout<<"ingrese tipo de cliente (t -> Tiempo), (m -> Mensual), (c -> Consumo) (x -> Mixta)";
        cin>>tipo;

        switch (tipo) {
        case 't': {
            cout<<"ingrese las horas que utilizo el servicio: ";
            cin>>hora;
            cout<<"ingrese el monto por hora: ";
            cin>>montoHora;
            Tarifa *t = new PorTiempo(num, tipo, hora, montoHora);
            this->addTarifa(t);
            break;
        }
        case 'm': {
            cout<<"ingrese el monto mensual: ";
            cin>>montoMensual;
            Tarifa *m = new PorMes(num, tipo, montoMensual);
            this->addTarifa(m);
            break;
        }
        case 'c': {
            cout<<"Ingrese los magas consumidos: ";
            cin>>megas;
            cout<<"Ingrese el monto por mega: ";
            cin>>montoMega;
            Tarifa *c = new PorConsumo(num, tipo, megas, montoMega);
            this->addTarifa(c);
            break;
        }
        case 'x': {
            cout<<"ingrese el monto mensual: ";
            cin>>montoMensual;
            cout<<"ingrese las horas que utilizo el servicio: ";
            cin>>hora;
            cout<<"ingrese el monto por hora: ";
            cin>>montoHora;
            cout<<"Ingrese los magas consumidos: ";
            cin>>megas;
            cout<<"Ingrese el monto por mega: ";
            cin>>montoMega;
            Tarifa *x = new Mixta(num, tipo, montoMensual, hora, montoHora, megas, montoMega);
            this->addTarifa(x);
            break;
        }
        default:
            cout<<"Desea ingresar otro cliente (s / n) " <<endl;
            cin>>dato;
            break;
        }

        cout<<"Desea ingresar otro cliente (s / n) " <<endl;
        cin>>dato;
    }


}

void GestorGigalight::crearArchivo()
{
    ofstream archivo("Clientes.dat", ios::binary);

    if(!archivo){
        cout<<"Error al grabar... " <<endl;
        exit(1);
    }

    strCliente c;

    for(auto it = tarifas.begin(); it != tarifas.end(); ++it){
        c.numero = (*it)->getNumero();
        c.tipo = (*it)->gettipoTarifa();
        c.monto = (*it)->calcularTarifa();

        archivo.write((char*)(&c), sizeof(strCliente));
    }

    archivo.close();
    cout<<"Archivo bin Grabado con exito: " <<endl;

}

void GestorGigalight::topFive()
{
    sort(tarifas.begin(), tarifas.end(), [](Tarifa* a, Tarifa* b){
        return a->calcularTarifa() > b->calcularTarifa();
    });

    cout<<"El top 5 de personas que mas deben pagar es..." <<endl;
    for(int i=0; i<5; i++){
        cout<<tarifas[i]->getNumero() <<" " <<tarifas[i]->gettipoTarifa() <<" " <<tarifas[i]->calcularTarifa() <<endl;
    }

}

void GestorGigalight::mostrarBin()
{
    ifstream archivo("Clientes.dat", ios::binary);

    if(!archivo){
        cout<<"Error " <<endl;
        exit(1);
    }

    strCliente c;

    while(archivo.read((char*)&c, sizeof(strCliente))){
        cout<<c.numero <<" " <<c.tipo <<" " <<c.monto <<endl;
    }
    archivo.close();

}
