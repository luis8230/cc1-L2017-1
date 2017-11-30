#ifndef ENTIDAD_H
#define ENTIDAD_H
#include <allegro.h>

class Entidad
{
    BITMAP *variable;
    BITMAP *collide;

    public:

        BITMAP *fondo;
        BITMAP *choque;


        int x;
        int y;

        const int Anchura = 640;
        const int Altura  = 480;
        BITMAP *buffer = create_bitmap(Anchura, Altura);

        int desplazamiento=4;

        virtual void pintar()=0;
};

#endif // ENTIDAD_H
