#ifndef JUGADOR_H
#define JUGADOR_H
#include <allegro.h>
#include "Entidad.h"

class Jugador:Entidad
{
    BITMAP *personajeArriba;
    BITMAP *personajeAbajo;
    BITMAP *personajeDerecha;
    BITMAP *personajeIzquierda;
    BITMAP *personajeAtaqueNI;
    BITMAP *personajeAtaqueND;
    BITMAP *personajeAtaqueFA;
    BITMAP *personajeAtaqueFB;


    public:
        Jugador();
        virtual ~Jugador();
        void pintar();
    protected:
    private:
};

#endif // JUGADOR_H
