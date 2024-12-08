#include "gestorviaje.h"
#include <iostream>
#include "colectivo.h"
#include "avion.h"
#include "viaje.h"
#include "mixto.h"
using namespace std;

GestorViaje::GestorViaje(){}

void GestorViaje::cargarViaje()
{
    int dato;
    float auxkm, auxpre, auxhora;

    cout<<"ingrese el tipo de viaje: " <<endl;
    cout<<"1: Colectivo, 2: Avion, 3: Mixto, 4: Exit" <<endl;
    cin>>dato;

    while(dato != 4){
        switch (dato) {
        case 1:{
            cout<<"ingrese la cantidad de km a recorrer y la cantida de de horas a viajar: " <<endl;
            cin>>auxkm;
            cin>>auxhora;
            Viaje *v1 = new Colectivo(auxkm, 0, auxhora);
            this->addViaje(v1);
            break;
        }
        case 2:{
            cout<<"Ingrese El precio del viaje y la cantitidad de horas de viaje: " <<endl;
            cin>>auxpre;
            cin>>auxhora;
            Viaje *v2 = new Avion(auxpre, auxhora);
            this->addViaje(v2);
            break;
        }
        case 3:{
            Mixto *m = new Mixto(0, 0);
            cout<<"Avion: " <<endl;
            cout<<"Ingrese El precio del viaje y la cantitidad de horas de viaje: " <<endl;
            cin>>auxpre;
            cin>>auxhora;
            Viaje *v4 = new Avion(auxpre, auxhora);
            m->addMixto(v4);
            cout<<"Colectivo: " <<endl;
            cout<<"ingrese la cantidad de km a recorrer y la cantida de de horas a viajar: " <<endl;
            cin>>auxkm;
            cin>>auxhora;
            Viaje *v3= new Colectivo(auxkm, 0, auxhora);
            m->addMixto(v3);
            this->addViaje(m);
            break;
        }
        default:
            break;
        }

        cout<<"Desea ingresar otro viaje?: " <<endl;
        cout<<"1: Colectivo, 2: Avion, 3: Mixto, 4: Exit" <<endl;
        cin>>dato;

    }

}

void GestorViaje::addViaje(Viaje *v)
{
    viajes.push_back(v);
}

void GestorViaje::mostrarDatos()
{
    cout<<"los viajes realizados son... " <<endl;

    for(auto it = viajes.begin(); it != viajes.end(); ++it){
        cout<<"El monto a pagar es: " <<(*it)->calcularMonto() <<" Tiempo de viaje aproximado " <<(*it)->calcularHoras() <<"Hrs" <<endl;
    }
}
