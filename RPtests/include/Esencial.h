#ifndef ESENCIAL_H
#define ESENCIAL_H
#include <allegro.h>
#include "Jugador.h"
#include "Entidad.h"

class Esencial:Entidad
{
    BITMAP *bosqueA;
    BITMAP *bosqueB;
    BITMAP *bosqueC;

    BITMAP *mapa;
    BITMAP *vista;
    BITMAP *chocar;
    int ubicacion;
    public:
        Jugador J;
        Esencial();
        void load();
        void refresh(Jugador &J);
        void paint(Jugador J);
        void pintar();

};

#endif // ESENCIAL_H
