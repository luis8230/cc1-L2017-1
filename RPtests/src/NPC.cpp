#include "NPC.h"
NPC:: NPC(char const *e){
    imagen= load_bitmap(e,NULL);
    detectarvida();

}



void NPC::pintar()
{
             movimiento();
            masked_blit(imagen, screen, 0, 0, x, y, 64,64);

}

void NPC::movimiento()
{
    for (int i ;i<=Anchura;i++){
        x+i;
        if (i=Anchura){
            for (int i;i>0;i++){
                x-i;
            }
        }
    }
    /*
    if(cambio==0)
    {
            y=y-desplazamiento;

    }
    else if (cambio == 1) // Down
    {
             y=y+desplazamiento;

    }

    if (cambio == 2) // Left
    {
             x=x-desplazamiento;
             }

     if (cambio == 3) // Right
    {

             x=x+desplazamiento;

    }

    */

      if (x<-32) x=-32;
      if (x>Anchura-32) x=Anchura-32;
      if (y<-32) y=-32;
      if (y>Altura-32) y=Altura-32;

}

int NPC::getx(){
    return x;
}

int NPC::gety(){
    return y;
}
void NPC::setposition(int nx,int ny){
    nx=x; ny=y;
}

void NPC::detectarvida(){
    if (hp==0){
        vive=false;
        blit(/*aca pon la imagen*/)
        ~NPC();
    }
}



