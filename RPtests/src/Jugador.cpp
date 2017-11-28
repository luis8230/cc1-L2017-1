#include "Jugador.h"

Jugador::Jugador(){

   //Personaje Principal//
    Protagonista= load_bitmap("3.bmp",NULL);
    AtaqueD = load_bitmap("5.bmp",NULL);
    AtaqueI = load_bitmap("4.bmp",NULL);
    ProtagonistaA= load_bitmap("1.bmp",NULL);
    ProtagonistaD= load_bitmap("0.bmp",NULL);
    ProtagonistaI= load_bitmap("2.bmp",NULL);

    direccion=0;
    animacion=0;
    x=0;
    y=0;

}

void Jugador::pintar(){
    keyboard();
    //masked_blit(Protagonista,screen,0,0,x,y,32,32);
     if ( ataca > 1 && ( direccion == 2 ) )
    {
           masked_blit(AtaqueD, buffer, 0, direccion*96, x-32, y-32, 96,96);
    }
    if ( ataca > 1 && ( direccion == 1 ) )
    {
           masked_blit(AtaqueI, buffer, 0, direccion*96, x-32, y-32, 96,96);
    if ( ataca > 1 || ataca < 0) ataca++;
}
}



int Jugador::getx(){
    return x;
}


int Jugador::gety(){
    return y;
}


void Jugador::keyboard(){
    int dx=x; int dy=y;
    int principio=0;


        masked_blit(Protagonista,screen,0,0,x,y,32,32);
    if ( key[KEY_UP] )
      {
           y-=desplazamiento;
           direccion = 3;
           masked_blit(ProtagonistaA,screen,0,0,x,y,32,32);
          }
      if ( key[KEY_DOWN] )
      {
           y+=desplazamiento;
           direccion = 0;
           masked_blit(Protagonista,screen,0,0,x,y,32,32);
      }
      if ( key[KEY_LEFT] )
      {
           x-=desplazamiento;
           direccion = 1;
           masked_blit(ProtagonistaI,screen,0,0,x,y,32,32);
      }
      if ( key[KEY_RIGHT] )
      {
           x+=desplazamiento;
           direccion = 2;
           masked_blit(ProtagonistaD,screen,0,0,x,y,32,32);
      }
       if ( key[KEY_RIGHT]&&key[KEY_SPACE] )
      {
          ataca=2;
           x+=desplazamiento;
           direccion = 2;
           masked_blit(ProtagonistaD,screen,0,0,x,y,32,32);
      }
       if ( key[KEY_LEFT]&&key[KEY_SPACE] )
      {
           ataca=2;
           x+=desplazamiento;
           direccion = 2;
           masked_blit(ProtagonistaD,screen,0,0,x,y,32,32);
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

      rest(10);
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


bool Jugador::atacando(){
    return ataca>1;
}


bool Jugador::NoAtaca(){
    return ataca =-1;
}
