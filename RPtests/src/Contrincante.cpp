#include "Contrincante.h"

Contrincante::Contrincante(){
    Rival= load_bitmap("personaje.bmp",NULL);

    direccion=0;
    animacion=0;
    x=0;
    y=0;


}

void Contrincante::pintar(){
    keyboard();
     if ( ataca > 1 && ( direccion == 2 ) )
    {
           masked_blit(Rival, buffer, 0, direccion*96, x-32, y-32, 96,96);
    }
    if ( ataca > 1 && ( direccion == 1 ) )
    {
           masked_blit(Rival, buffer, 0, direccion*96, x-32, y-32, 96,96);
    if ( ataca > 1 || ataca < 0) ataca++;
}
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


        masked_blit(Rival,screen,0,0,x,y,32,32);
    if ( key[KEY_W] )
      {
           y-=desplazamiento;
           direccion = 3;
           masked_blit(Rival,screen,0,0,x,y,32,32);
          }
      if ( key[KEY_S] )
      {
           y+=desplazamiento;
           direccion = 0;
           masked_blit(Rival,screen,0,0,x,y,32,32);
      }
      if ( key[KEY_A] )
      {
           x-=desplazamiento;
           direccion = 1;
           masked_blit(Rival,screen,0,0,x,y,32,32);
      }
      if ( key[KEY_D] )
      {
           x+=desplazamiento;
           direccion = 2;
           masked_blit(Rival,screen,0,0,x,y,32,32);
      }
       if ( key[KEY_D]&&key[KEY_LCONTROL] )
      {
          ataca=2;

           direccion = 2;
           masked_blit(Rival,screen,0,0,x,y,32,32);
           rest(1);
           masked_blit(Rival,screen,0,0,x,y,32,32);
      }
       if ( key[KEY_A]&&key[KEY_LCONTROL] )
      {
           ataca=2;

           direccion = 2;
           masked_blit(Rival,screen,0,0,x,y,32,32);
           rest(1);
           masked_blit(Rival,screen,0,0,x,y,32,32);
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




Contrincante:: ~Contrincante(){
    destroy_bitmap(Rival);
}

