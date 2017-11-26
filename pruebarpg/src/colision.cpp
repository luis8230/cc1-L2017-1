#include "colision.h"

colision::colision(Jugador &a, char const *b)
{
   posx=a.getx();
   posy=a.gety();

   prestocambio=false;

   colisiones=load_bmp(b,NULL);

   collision();




}

colision::~colision()
{
    destroy_bitmap(colisiones);
}

void colision::collision()
{
    bool chocar=false;

    //aca no sabia el tamaño del jugador asi que le puse 32 y 16, ve jugando con los numeros si no funciona bien

    for (int i=0;i<32;i++){
        for (int j=0;j<16;i++){
            if(getpixel(colisiones,posx+i,posy+j)==0xff0000){
                chocar=true;
            }
            if(getpixel(colisiones,posx+i,posy+j)==0x00ff00){
                prestocambio=true;
            }
        }

    }
    if (chocar){
        a.mover(posx,posy);
}
}



