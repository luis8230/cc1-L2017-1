#include "NPC.h"
NPC:: NPC(char const *e){
    imagen= load_bitmap(e,NULL);

}



void NPC::pintar()
{

            masked_blit(imagen, screen, 0, 0, x, y, 64,64);
            movimiento();
}

void NPC::movimiento()
{
    int re = rand()%5;
    estado= re;
     int dx=x; int dy=y;
       if ( estado=1 )
      {
           y-=desplazamiento;
           direccion = 3;
      }
      if ( estado=2 )
      {
           y+=desplazamiento;
           direccion = 0;
      }
      if ( estado=3 )
      {
           x-=desplazamiento;
           direccion = 1;
      }
      if ( estado=4 )
      {
           x+=desplazamiento;
           direccion = 2;
      }
      if ( dx != x || dy != y )
      {
           animacion++;
           if ( animacion > 2 ) animacion = 0;
      }
      if (x<-32) x=-32;
      if (x>Anchura-64) x=Anchura-64;
      if (y<-32) y=-32;
      if (y>Altura-64) y=Altura-64;

}
