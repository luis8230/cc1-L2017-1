#include "Cuadrado.h"

Cuadrado::Cuadrado()
{
        largo=0;
    }

Cuadrado::Cuadrado(int x)
{
    largo=x;
}
int Cuadrado::area(){
    return largo*largo;
}
void Cuadrado::print(){
    cout<<"el largo es: "<<largo<<endl;
}

