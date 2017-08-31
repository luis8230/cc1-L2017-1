#include <iostream>

using namespace std;

int main()
{
    int x,y,mayor,menor;
    float promedio,cant;
    cant=0;
    mayor=0;
    cout<<"ingrese la cantidad de numeros"<<endl;
    cin>>x;
    while(x>0)
        {
        cout<<"ingrese un numero";
        cin>>y;
        cant=cant+y;
        if(mayor<y)
            mayor=y;
        if(y<menor)
            menor=y;

        x=x-1;
        }
    promedio=cant/x;

    cout<<"el promedio es"<<  promedio <<"  el mayor es "<< mayor<< " el menor es"<< menor <<endl;

    return 0;
}
