#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "Fecha.h"
#include <string>

using namespace std;


class empleado
{
    public:
        string nombre;
        int salario;
        Fecha ingreso;

        empleado();
        empleado(string n,int s,Fecha i);

        void setnombre(string n);
        void setsalario(int s);
        void setfecha(Fecha i);
        void print();

};

#endif // EMPLEADO_H
