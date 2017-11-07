#include "empleado.h"
#include <string>
#include <iostream>
#include "Fecha.h"

using namespace std;

empleado::empleado()
{
   nombre="";
   salario=0;
}

empleado::empleado(string n,int s,Fecha i)
{
    setnombre(n);
    setsalario(s);
    setfecha(i);

    print();
}

void empleado::setnombre(string n){nombre=n;}
void empleado::setfecha(Fecha i){ingreso=i;}
void empleado::setsalario(int s){salario=s;}

void empleado::print(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"salario: "<<salario<<endl;
    cout<<"fecha de ingreso: ";
    ingreso.print();
}


