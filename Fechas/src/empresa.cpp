#include "empresa.h"
#include "empleado.h"
#include "Fecha.h"
#include <iostream>

using namespace std;

empresa::empresa()
{
    nombre="";
    ruc=0;
}

empresa::empresa(string n,long long int r)
{
    setnombre(n);
    setruc(r);
    addempleado();


}

void empresa::setnombre(string n){nombre=n;}
void empresa::setruc(long long int r)
{
    if (r<10000000000||r>99999999999)
        cout<<"RUC no valido"<<endl;
    else
        ruc=r;

}

void empresa::addempleado(){
    int tam;
    cout<<"ingrese numero de empleados"<<endl;
    cin>>tam;
    empleado h[tam];
    for(int i=0;i<tam;i++){

        string x;
        int z,a,b,c;
        Fecha y;
        cout<<"ingrese nombre de empleado"<<endl;
        cin>>x;
        cout<<"ingrese salario de empleado"<<endl;
        cin>>z;
        cout<<"ingrese dia de ingreso"<<endl;
        cin>>a;
        cout<<"ingrese mes de ingreso"<<endl;
        cin>>b;
        cout<<"ingrese año de ingreso"<<endl;
        cin>>c;

        h[i].setnombre(x);
        h[i].setsalario(z);

        y.setdia(a);
        y.setmes(b);
        y.setyear(c);

        h[i].setfecha(y);
    }
    cout<<nombre<<endl;
    cout<<"RUC: "<<ruc<<endl;

    for(int i=0;i<tam;i++){

        h[i].print();
    }
}


enum departamentos{logistica, almacen, recursos humanos };
    departamentos.depa;
    if (depa== logistica)
        s= s+





