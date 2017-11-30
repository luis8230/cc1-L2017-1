#ifndef COLISION_H
#define COLISION_H
#include <allegro.h>
#include "Jugador.h"

class colision
{
    Jugador *a;
    BITMAP *colisiones;
    bool prestocambio;

    int posx;
    int posy;


    public:
      colision(Jugador a, char const *b);
     ~colision();
        void collision();


};

#endif // COLISION_H
