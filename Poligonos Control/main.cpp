#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Cuadrado.h"
using namespace std;


int main()
{
    Rectangulo c(5,3);
    c.print();
    cout<<c.area()<<endl;;
    Triangulo d(4,5);
    d.print();
    cout<< d.area()<<endl;
    Cuadrado e(5);
    e.print();
    cout<< e.area()<<endl;

    return 0;
}
