#include "Jugador.h"

Jugador::Jugador()
{
   //Personaje Principal//
    Protagonista= load_bitmap("isaac.bmp",NULL);
    personajeArriba=  load_bitmap("0.bmp",NULL);
    personajeAbajo=  load_bitmap("1.bmp",NULL);
    personajeDerecha= load_bitmap("8.bmp",NULL);
    personajeIzquierda= load_bitmap("7.bmp",NULL);
    personajeAtaqueNI= load_bitmap("4.bmp",NULL);
    personajeAtaqueND= load_bitmap("9.bmp",NULL);
    personajeAtaqueFA= load_bitmap("AtaqueAlto.bmp",NULL);
    personajeAtaqueFB= load_bitmap("AtaqueBajo.bmp",NULL);
    direccion=0;
    animacion=0;
    x=200;
    y=50;

}


void Jugador::pintar()
{
    masked_blit(Protagonista,screen,0,0,x,y,69,78);

}

int Jugador::getx(){
    return x;
}
int Jugador::gety(){
    return y;
}
void Jugador::keyboard(){
    int dx=x; int dy=y;
       if ( key[KEY_UP] )
      {
           y-=desplazamiento;
           direccion = 3;
      }
      if ( key[KEY_DOWN] )
      {
           y+=desplazamiento;
           direccion = 0;
      }
      if ( key[KEY_LEFT] )
      {
           x-=desplazamiento;
           direccion = 1;
      }
      if ( key[KEY_RIGHT] )
      {
           x+=desplazamiento;
           direccion = 2;
      }
      if ( dx != x || dy != y )
      {
           animacion++;
           if ( animacion > 2 ) animacion = 0;
      }


}
