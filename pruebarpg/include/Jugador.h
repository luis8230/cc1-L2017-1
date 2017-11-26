#ifndef JUGADOR_H
#define JUGADOR_H
#include <allegro.h>
#include "Entidad.h"

class Jugador:Entidad
{
    BITMAP *Protagonista;
    BITMAP *personajeArriba;
    BITMAP *personajeAbajo;
    BITMAP *personajeDerecha;
    BITMAP *personajeIzquierda;
    BITMAP *personajeAtaqueNI;
    BITMAP *personajeAtaqueND;
    BITMAP *personajeAtaqueFA;
    BITMAP *personajeAtaqueFB;
    int direccion;
    int animacion;

    public:
        Jugador();
        void pintar();
        int getx(); int gety();
        void mover();
        void keyboard();

};

#endif // JUGADOR_H
