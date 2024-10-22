#include "gestorvinos.h"
#include <fstream>
#include <iostream>
#include "demesa.h"
#include "premiun.h"
#include "especial.h"
#include "vino.h"
#include <vector>
using namespace std;

GestorVinos::GestorVinos(int anio)
{
    this->anio = anio;
}

void GestorVinos::leerArchi()
{
    ifstream archivo("vinos.dat", ios::binary);

    if(!archivo){
        cout<<"Error al leer el archivo..." <<endl;
        exit(1);
    }

    strVinos v;

    while(archivo.read((char*)&v, sizeof(strVinos))){
        if(v.tipo == 'M'){
            Vino *vinoMesa = new DeMesa(v.numero, v.tipo, v.cant_Lts, v.anio_Produc);
            this->addvinos(vinoMesa);
        }else if(v.tipo == 'P'){
            Vino *vinoPremiun = new Premiun(v.numero, v.tipo, v.cant_Lts, v.anio_Produc);
            this->addvinos(vinoPremiun);
        }else{
            Vino *vinoEspecial = new Especial(v.numero, v.tipo, v.cant_Lts, v.anio_Produc);
            this->addvinos(vinoEspecial);
        }
    }

    archivo.close();

}

void GestorVinos::crearArchitxt()
{
    ofstream archivo("Vinos.txt", ios::out);

    if(!archivo){
        cout<<"Error al grabar el txt " <<endl;
        exit(1);
    }

    this->anio = 2020;

    for(int i=0; i<4; i++){
        archivo<<"Año: " <<anio <<" Litros: " <<this->ltsXAnio() <<" Monto: " <<this->montoXAnio() <<endl;
        anio++;
    }

    archivo.close();

    cout<<"Archivo Grabaddo con exito: " <<endl;

}

void GestorVinos::addvinos(Vino *v)
{
    this->vinos.push_back(v);
}

double GestorVinos::montoXAnio()
{
    double montoxanio;

    int anio_mesa, anioPremiun, anioEspecial;
    anio_mesa = this->anio -1;
    anioPremiun = this->anio -2;
    anioEspecial = this->anio -3;

    for(auto it = vinos.begin(); it != vinos.end(); ++it){
        if(((*it)->getTipo() == 'M') && ((*it)->getAnioProduc() <= anio_mesa)){
            montoxanio += (*it)->calcularLts();
        }else if(((*it)->getTipo() == 'P') && ((*it)->getAnioProduc() <= anioPremiun)){
            montoxanio += (*it)->calcularLts();
        }else if(((*it)->getTipo() == 'E') && ((*it)->getAnioProduc() <= anioEspecial)){
            montoxanio += (*it)->calcularLts();
        }
    }

    return montoxanio;
}

int GestorVinos::ltsXAnio()
{
    int anio_mesa, anioPremiun, anioEspecial, ltsXAnio;
    anio_mesa = this->anio -1;
    anioPremiun = this->anio -2;
    anioEspecial = this->anio -3;

    for(auto it = vinos.begin(); it != vinos.end(); ++it){
        if(((*it)->getTipo() == 'M') && ((*it)->getAnioProduc() <= anio_mesa)){
            ltsXAnio += (*it)->getCantLts();
        }else if(((*it)->getTipo() == 'P') && ((*it)->getAnioProduc() <= anioPremiun)){
            ltsXAnio += (*it)->getCantLts();
        }else if(((*it)->getTipo() == 'E') && ((*it)->getAnioProduc() <= anioEspecial)){
            ltsXAnio += (*it)->getCantLts();
        }
    }

    return ltsXAnio;
}

void GestorVinos::setAnio(int newAnio)
{
    anio = newAnio;
}

