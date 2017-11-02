#include "Rectangulo.h"


Rectangulo::Rectangulo()
{
        largo=0;
        altura=0;
    }

Rectangulo::Rectangulo(int x,int y)
{
    largo=x;
    altura=y;

}
int Rectangulo::area(){
    return largo*altura;
}
void Rectangulo::print(){
    cout<<"el largo es : "<<largo<<" y la altura es: "<<altura<<endl;
}
