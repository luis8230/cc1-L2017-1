#ifndef CUADRADO_H
#define CUADRADO_H
#include "Poligono.h"

class Cuadrado:public Poligono{
public:
    Cuadrado();
    Cuadrado(int x);
    int area();
    void print();
};

#endif // CUADRADO_H
