#include "Contrincante.h"

Contrincante::Contrincante(){
    RivalA= load_bitmap("RivalA.bmp",NULL);
    RivalD= load_bitmap("RivalD.bmp",NULL);
    RivalR= load_bitmap("RivalR.bmp",NULL);
    RivalI= load_bitmap("RivalI.bmp",NULL);

    direccion=0;
    animacion=0;
    x=0;
    y=0;


}

void Contrincante::pintar(){
    keyboard();
    masked_blit(RivalD, buffer, animacion*32, direccion*32, x, y, 32,32);

}




int Contrincante::getx(){
    return x;
}


int Contrincante::gety(){
    return y;
}


void Contrincante::keyboard(){
    int dx=x; int dy=y;
    int principio=0;


    masked_blit(RivalA,screen,0,0,x,y,32,32);
    if ( key[KEY_W] )
      {
           y-=desplazamiento;
           direccion = 3;
           masked_blit(RivalA,screen,0,0,x,y,32,32);
          }
      if ( key[KEY_S] )
      {
           y+=desplazamiento;
           direccion = 0;
           masked_blit(RivalD,screen,0,0,x,y,32,32);
      }
      if ( key[KEY_A] )
      {
           x-=desplazamiento;
           direccion = 1;
           masked_blit(RivalI,screen,0,0,x,y,32,32);
      }
      if ( key[KEY_D] )
      {
           x+=desplazamiento;
           direccion = 2;
           masked_blit(RivalR,screen,0,0,x,y,32,32);
      }
       if ( key[KEY_D]&&key[KEY_LCONTROL] )
      {
            ataca=true;

           direccion = 2;
           masked_blit(RivalD,screen,0,0,x,y,32,32);
           rest(1);
           masked_blit(RivalD,screen,0,0,x,y,32,32);
      }
       if ( key[KEY_A]&&key[KEY_LCONTROL] )
      {
           ataca=true;

           direccion = 2;
           masked_blit(RivalD,screen,0,0,x,y,32,32);
           rest(1);
           masked_blit(RivalD,screen,0,0,x,y,32,32);
      }
      if ( dx != x || dy != y )
      {
           animacion++;
           if ( animacion > 2 ) animacion = 0;
      }
      if (x<=-32) x=0;
      if (x>Anchura-64) x=Anchura-64;
      if (y<=-32) y=0;
      if (y>Altura-64) y=Altura-64;

      rest(1);
}



void Contrincante::posiciona(int nx,int ny){
    x=nx;
    y=ny;
}





