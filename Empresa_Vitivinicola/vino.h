#ifndef VINO_H
#define VINO_H


class Vino
{
protected:
    int numero;
    char tipo;
    int cantLts;
    int anioProduc;
public:
    Vino(int numero, char tipo, int cantLts, int anioProduc);
    virtual double calcularLts() = 0;
    int getNumero() const;
    char getTipo() const;
    int getCantLts() const;
    int getAnioProduc() const;
};

#endif // VINO_H
