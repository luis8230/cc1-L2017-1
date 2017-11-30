#ifndef WARRIOR_H
#define WARRIOR_H
#include <allegro.h>


class warrior
{
    BITMAP *b;
    BITMAP *personaje;
    int posx,posy;
    int direccion;
    int animacion;

    public:

        warrior(BITMAP *buffer);
        void inicia();
        void pinta();
        void teclado();
        int getx();
        int gety();
        void setpos(int nx,int ny);


};

#endif // WARRIOR_H
