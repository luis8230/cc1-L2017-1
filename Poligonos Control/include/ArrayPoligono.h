#ifndef ARRAYPOLIGONO_H
#define ARRAYPOLIGONO_H
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Cuadrado.h"


class ArrayPoligono:public Poligono
{
protected:
    int tam;
    Poligono *ptr;
    int lista[];
public:
    ArrayPoligono();
    void addcuadrado(Cuadrado x);

};

#endif // ARRAYPOLIGONO_H
