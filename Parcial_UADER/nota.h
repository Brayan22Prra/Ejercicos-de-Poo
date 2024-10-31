#ifndef NOTA_H
#define NOTA_H


class Nota
{
private:
    int legajo;
    int nota;
public:
    Nota(int legajo, int nota);
    int getLegajo() const;
    int getNota() const;
};

#endif // NOTA_H
