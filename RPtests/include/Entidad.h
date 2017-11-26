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
        int desplazamiento=4;

        virtual void pintar()=0;
};

#endif // ENTIDAD_H
