#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include <iostream>
#include "jugador.h"
using namespace std;

class equipo
{
    public:
        jugador ing[11];
        string nombre;

        equipo();
        equipo(string name,jugador ing[11]);

        void IngresoNombre(string nombre);
        void Players(jugador ing[11]);
        void Impresion();

};

#endif // EQUIPO_H

