#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include <iostream>
#include "jugador.h"
using namespace std;

class equipo
{
    public:
        string nombre;
        int jugadores;
        equipo();
        equipo(string name,int players);

};

#endif // EQUIPO_H
