#include <iostream>
#include <fstream>

struct Persona{
    char nombre[20];
    int edad;
    float salario;
};

using namespace std;

int main()
{
    //Crea el archivo:
    ofstream archivo("persona.dat", ios::binary);

    if(!archivo){
        cout<<"Error al crear el archivo: " <<endl;
        return 1;
    }

    Persona personas[3] = {{"Brachu", 24, 1200}, {"Cavego", 23, 1500}, {"Jero", 24, 1800}};

    for(int i=0; i<3; i++){
        archivo.write((char*)(&personas[i]), sizeof(Persona));
    }

    archivo.close();

    //Lee el archivo ---------------------------------------------

    ifstream archivo1("persona.dat", ios::binary);

    if(!archivo1){
        cout<<"Error al leer el archivo " <<endl;
        return 1;
    }

    Persona persona1;

    cout<<"Mostrando Datos: " <<endl;

    while (archivo1.read((char*)(&persona1), sizeof(Persona))){
        cout<<endl;
        cout<<"Nombre: " <<persona1.nombre <<endl;
        cout<<"Edad: " <<persona1.edad <<endl;         //Aca se podria instanciar el objeto;
        cout<<"Salario: " <<persona1.salario <<endl;
    }

    archivo.close();

    return 0;
}
