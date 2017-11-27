#include "Jugador.h"

Jugador::Jugador(){

   //Personaje Principal//
    Protagonista= load_bitmap("isaac.bmp",NULL);
    /*personajeArriba=  load_bitmap("0.bmp",NULL);
    personajeAbajo=  load_bitmap("1.bmp",NULL);
    personajeDerecha= load_bitmap("8.bmp",NULL);
    personajeIzquierda= load_bitmap("7.bmp",NULL);
    personajeAtaqueNI= load_bitmap("4.bmp",NULL);
    personajeAtaqueND= load_bitmap("9.bmp",NULL);
    personajeAtaqueFA= load_bitmap("AtaqueAlto.bmp",NULL);
    personajeAtaqueFB= load_bitmap("AtaqueBajo.bmp",NULL);
    */direccion=0;
    animacion=0;
    x=200;
    y=50;

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

