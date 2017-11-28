#ifndef NPC_H
#define NPC_H
#include <allegro.h>
#include "Entidad.h"
class NPC: Entidad
{


    BITMAP *imagen;



    public:
        int x,y;
        int cx,cy;
        int animacion;
        int estado;
        int direccion; //1=arriba, 2= abajo 3= izquierda 4= derecha
        int escena;
        int hp=5;
        int maxhp=5;
        int ataque= 3;
        bool vive= true;
        bool movarriba= true;
        bool movabajo= true;
        bool movizqui= true;
        bool movderec= true;

        int spritex= 32;                int spritey= 32;
        int spritexStart = 32 * 0;      int spriteyStart = 32 * 0;
        bool agresivo= true;

        NPC(char const *e);
        void pintar();
        void movimiento();
        int getx();
        int gety();
        void setposition(int nx,int ny);
        void detectarvida();


};

#endif // NPC_H
