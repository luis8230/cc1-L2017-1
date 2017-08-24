#include <iostream>

using namespace std;

int main()
{
    int anio ;
    cout<<"ingrese un año "<<endl;
    cin>> anio ;
    if (anio % 4 == 0){
        if((anio%100)!=0 || (anio% 400) ==0)
            cout<<"es bisiesto"<<endl;
    }
    else
        cout<<"no es bisiesto"<<endl;
    return 0;
}
