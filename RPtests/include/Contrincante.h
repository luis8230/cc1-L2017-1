#ifndef CONTRINCANTE_H
#define CONTRINCANTE_H
#include <allegro.h>
#include "Entidad.h"

class Contrincante:Entidad
{BITMAP *RivalA;
BITMAP *RivalD;
BITMAP *RivalR;
BITMAP *RivalI;

    int direccion;
    int animacion;


    public:

        int hp=3;
        float attackSpeed = 0.3;
        bool ataca=false;

        Contrincante();
        void pintar();
        int getx(); int gety();
        void keyboard();
        void posiciona(int nx,int ny);

};

#endif // CONTRINCANTE_H
