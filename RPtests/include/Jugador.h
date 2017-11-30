#ifndef JUGADOR_H
#define JUGADOR_H
#include <allegro.h>
#include "Entidad.h"

class Jugador:Entidad
{
    BITMAP *Protagonista;
    BITMAP *ProtagonistaA;
    BITMAP *ProtagonistaD;
    BITMAP *ProtagonistaI;
    BITMAP *AtaqueI1; BITMAP *AtaqueI2;
    BITMAP *AtaqueD1; BITMAP *AtaqueD2;
    BITMAP *disparo;

    int direccion;
    int animacion;


    public:

        int hp=3;
        float attackSpeed = 0.3;
        bool ataca=false;

        Jugador();

        void pintar();
        int getx(); int gety();


        void keyboard();

        void posiciona(int nx,int ny);



};

#endif // JUGADOR_H
