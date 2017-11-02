#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Poligono.h"

class Triangulo: public Poligono{
public:
    Triangulo();
    Triangulo(int x,int y);
    int area();
    void print();
};

#endif // TRIANGULO_H
