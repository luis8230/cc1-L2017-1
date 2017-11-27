#ifndef NPC_H
#define NPC_H
#include <allegro.h>
#include "Entidad.h"
class NPC: Entidad
{


    BITMAP *imagen;

    int x,y;
    int cx,cy;
    int animacion;
    int estado;
    int direccion;
    int escena;
    public:
        NPC(char const *e);
        //void crea( BITMAP *nimg, int  ex, int ey, int dir, int _estado, int _lugar );
        void pintar();
        void movimiento();
    private:
};

#endif // NPC_H
