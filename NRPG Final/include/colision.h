#ifndef COLISION_H
#define COLISION_H
#include <allegro.h>


class colision
{
    jugador a;
    BITMAP *colisiones;

    int posx;
    int posy;


    public:
        colision(jugador a,const char *b);

        void collision();

};

#endif // COLISION_H
