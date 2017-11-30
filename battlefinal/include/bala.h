#ifndef BALA_H
#define BALA_H
#include <allegro.h>


class bala
{
    int posx;
    int posy;
    BITMAP *proyectilh;
    BITMAP *proyectilv;
    BITMAP *buffer;

    public:
        bala(int x,int y,BITMAP *b);

        void crearbala();


};

#endif // BALA_H
