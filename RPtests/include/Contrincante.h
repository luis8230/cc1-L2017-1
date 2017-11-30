#ifndef CONTRINCANTE_H
#define CONTRINCANTE_H
#include <allegro.h>
#include "Entidad.h"

class Contrincante:Entidad
{BITMAP *RivalA;
BITMAP *RivalD;
BITMAP *RivalR;
BITMAP *RivalI;
BITMAP *RivalAI; BITMAP *RivalAD;

    int direccion;
    int animacion;
    int ataca= 0;

    public:

        int hp=10;
        int maxhp=10;
        float attackSpeed = 0.3;
        int attackDamage = 5;

        Contrincante();
        ~Contrincante();
        void pintar();
        int getx(); int gety();
        void keyboard();
        void posiciona(int nx,int ny);

};

#endif // CONTRINCANTE_H
