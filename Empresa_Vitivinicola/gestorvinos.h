#ifndef GESTORVINOS_H
#define GESTORVINOS_H
#include <vector>
#include "vino.h"
#include "demesa.h"
#include "especial.h"
#include "premiun.h"
using namespace std;

struct strVinos{
    int numero;
    char tipo;
    int cant_Lts;
    int anio_Produc;
};

class GestorVinos
{
private:
    vector<Vino*> vinos;
    int anio;
public:
    GestorVinos(int anio);
    void leerArchi();
    void crearArchitxt();
    void addvinos(Vino *v);
    double montoXAnio();
    int ltsXAnio();
    void mostrarDatos();
    void setAnio(int newAnio);
};

#endif // GESTORVINOS_H
