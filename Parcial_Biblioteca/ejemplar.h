#ifndef EJEMPLAR_H
#define EJEMPLAR_H

class Ejemplar
{
private:
    int idej;
    double isbn;
    int añoImpreso;
    char* editorial;
public:
    Ejemplar(double isbn, int añoImpreso, char* editorial, int idej);
    double getIsbn() const;
    void setIsbn(double newIsbn);
    int getAñoImpreso() const;
    void setAñoImpreso(int newAñoImpreso);
    char *getEditorial() const;
    void setEditorial(char *newEditorial);
    int getIdej() const;
    void setIdej(int newIdej);
};

#endif // EJEMPLAR_H
