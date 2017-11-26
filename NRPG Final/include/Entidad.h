#ifndef ENTIDAD_H
#define ENTIDAD_H
#include <allegro.h>

class Entidad
{
    BITMAP * variable;
    BITMAP * collide;


    public:

        int x;
        int y;

        virtual void pintar()=0;
        virtual void colision()=0;
};

#endif // ENTIDAD_H
