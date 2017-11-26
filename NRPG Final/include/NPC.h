#ifndef NPC_H
#define NPC_H
#include <allegro.h>

class NPC
{   //Ataque Jefe//
    BITMAP *AtaqueOdin1;
    BITMAP *AtaqueOdin2;

//Sprites Enemigos//

    //Enemigo uno//
    BITMAP *EnemigoAr1;
    BITMAP *EnemigoAb1;
    BITMAP *EnemigoIz1;
    BITMAP *EnemigoDe1;
    BITMAP *EnemigoAt1;

    //Enemigo dos//
    BITMAP *EnemigoAr2;
    BITMAP *EnemigoAb2;
    BITMAP *EnemigoIz2;
    BITMAP *EnemigoDe2;
    BITMAP *EnemigoAt2;

    //Enemigo tres//
    BITMAP *EnemigoAr3;
    BITMAP *EnemigoAb3;
    BITMAP *EnemigoIz3;
    BITMAP *EnemigoDe3;
    BITMAP *EnemigoAt3;

    //Jefe Odin//
    BITMAP *OdinAr1;
    BITMAP *OdinAb1;
    BITMAP *OdinIz1;
    BITMAP *OdinDe1;
    BITMAP *OdinAt1;

    BITMAP *imagen;
    int x,y;
    int cx,cy;
    int animacion;
    int estado;
    int direccion;
    int escena;
    public:
        void crea( BITMAP *_img, int _x, int _y, int dir, int _estado, int _lugar );
       // void pinta();
    private:
};

#endif // NPC_H
