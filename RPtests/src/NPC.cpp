#include "NPC.h"
NPC:: NPC(char const *e){
    imagen= load_bitmap(e,NULL);

}



void NPC::pintar()
{
            movimiento();
            masked_blit(imagen, screen, 0, 0, x, y, 32,32);

}

void NPC::movimiento()
{
    random();
    int cambio;
    cambio= direccion;
    if(cambio==0)
        {
            y=y-desplazamiento+5;
            pintar();

    }
    else if (cambio == 1) // Down
    {
             y=y+desplazamiento+5;
            pintar();
    }

    if (cambio == 2) // Left
    {
             x=x-desplazamiento+5;
             pintar();
             }

     if (cambio == 3) // Right
    {

             x=x+desplazamiento+5;
             pintar();
             cambio=1;

    }
    else
    {

        }

      if (x<=-32) x=0;
      if (x>Anchura-64) x=Anchura-64;
      if (y<=-32) y=0;
      if (y>Altura-64) y=Altura-64;


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

int NPC::random(){
    //srand(time(NULL));
    direccion=  rand()%5;
    return direccion;
}


NPC:: ~NPC(){
    destroy_bitmap(imagen);
}

