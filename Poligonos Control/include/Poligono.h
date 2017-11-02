#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
using namespace std;


class Poligono{
protected:
    int largo, altura;
public:
    virtual int area()=0;

};


#endif // POLIGONO_H
