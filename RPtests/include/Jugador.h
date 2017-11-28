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
    BITMAP *AtaqueI;
    BITMAP *AtaqueD;

    int direccion;
    int animacion;
    int ataca= 0;

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
        void vida();
        bool atacando();
        bool NoAtaca();

};

#endif // JUGADOR_H
