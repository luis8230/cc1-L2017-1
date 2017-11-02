#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Poligono.h"

class Rectangulo:public Poligono{
public:
    Rectangulo();
    Rectangulo(int x,int y);
     int area();
     void print();
};
#endif // RECTANGULO_H
