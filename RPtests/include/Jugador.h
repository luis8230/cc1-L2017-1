#ifndef JUGADOR_H
#define JUGADOR_H
#include <allegro.h>
#include "Entidad.h"

class Jugador:Entidad
{
    BITMAP *Protagonista;

    int direccion;
    int animacion;

    public:

        int hp=10;
        int maxhp=10;
        float attackSpeed = 0.3;
        int attackDamage = 5;

        Jugador();
        ~Jugador();
        void pintar();
        int getx(); int gety();

        void keyboard();
        void choques();
        void posiciona(int nx,int ny);
};

#endif // JUGADOR_H
