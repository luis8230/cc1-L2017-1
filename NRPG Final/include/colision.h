#ifndef COLISION_H
#define COLISION_H
#include <allegro.h>


class colision
{
    jugador a;
    BITMAP *colisiones;
    bool prestocambio;

    int posx;
    int posy;


    public:
        colision(jugador a,const char *b);

        void collision();
        void cambio();

};

#endif // COLISION_H
