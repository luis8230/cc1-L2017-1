#include "Triangulo.h"

Triangulo::Triangulo()
{
        largo=0;
        altura=0;
    }

Triangulo::Triangulo(int x,int y)
{
    largo=x;
    altura=y;

}
int Triangulo::area(){
    return (largo*altura)/2;
}
void Triangulo::print(){
    cout<<"el largo es: "<<largo<<" y la altura es: "<<altura<<endl;
}
