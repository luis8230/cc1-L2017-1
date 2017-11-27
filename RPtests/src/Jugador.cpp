#include "Jugador.h"

Jugador::Jugador(){

   //Personaje Principal//
    Protagonista= load_bitmap("isaac.bmp",NULL);
    direccion=0;
    animacion=0;
    x=0;
    y=0;

}

void Jugador::pintar(){
    masked_blit(Protagonista,screen,0,0,x,y,64,64);
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
      if (x<-32) x=-32;
      if (x>Anchura-64) x=Anchura-64;
      if (y<-32) y=-32;
      if (y>Altura-64) y=Altura-64;
}


void Jugador::posiciona(int nx,int ny){
    x=nx;
    y=ny;
}


void Jugador::choques()
{
    bool chocar=false;
    bool prestocambio=true;

    BITMAP *mapa=load_bmp("bosque-choque.bmp",NULL);


    for (int i=0;i<30;i++){
        for (int j=0;j<15;i++){
            if(getpixel(mapa,x+i,y+j)==0xff0000){
                chocar=true;
            }
            if(getpixel(mapa,x+i,y+j)==0x00ff00){
                prestocambio=true;
            }
        }

    }
    if (chocar){
        posiciona(x,y);
    }
}


Jugador:: ~Jugador(){
    destroy_bitmap(Protagonista);
}

