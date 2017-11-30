#ifndef ARENA_H
#define ARENA_H
#include <allegro.h>


class arena
{
    BITMAP *escenario;
    BITMAP *buffer;

    public:
        arena(char const *a,BITMAP *b);

        void cargar(char const *nombre);
        void pintar();



};

#endif // ARENA_H
