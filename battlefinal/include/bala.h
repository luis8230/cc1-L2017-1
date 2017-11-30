#ifndef BALA_H
#define BALA_H
#include <allegro.h>


class bala
{
    int posx;
    int posy;
    int dx;
    int dy;


    BITMAP *proyectilh;
    BITMAP *proyectilv;
    BITMAP *buffer;

    public:
        bala(int &x,int &y,BITMAP *b);

        void crearbala();
        void colsion(int x1,int y1,int x2,int y2);


};

#endif // BALA_H
