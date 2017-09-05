#include <iostream>

using namespace std;

int main()
{
    short number;
    cout<<"ingresa un numero ";
    cin>>number;

    if (number<0)
        cout<<"no es un valor valido";
    cout<<"el factorial de " <<number<<" es: "<<endl;
    long acumulador = 1;

    for (;number>0; acumulador *= number--);
        if (acumulador<0)
            cout<<"no es un valor valido, es un valor negativo";
        else
            cout<<acumulador<<".\n";
    return 0;
}
