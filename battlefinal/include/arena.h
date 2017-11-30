#ifndef ARENA_H
#define ARENA_H
#include <allegro.h>


class arena
{
    BITMAP *buffer;
    BITMAP *escenario;


    public:
        arena(const char *a,BITMAP *b);

        void pintar();


};

#endif // ARENA_H
