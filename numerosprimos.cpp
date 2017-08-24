#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    if (x<2)
        cout<<"no es un valor valido"<<endl;
    y=0;
    z=1;
    while(z<=x){
         if(x%z==0)
            y=y+1;
        z=z+1;
    }
    if(y>2)
        cout<<"el numero no es primo"<<endl;
    else
        cout<<"el numero es primo"<<endl;
    return 0;
}
