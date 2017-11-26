#include "Jugador.h"

Jugador::Jugador()
{
   //Personaje Principal//
    personajeArriba=  load_bitmap("0.bmp",NULL);
    personajeAbajo=  load_bitmap("1.bmp",NULL);
    personajeDerecha= load_bitmap("8.bmp",NULL);
    personajeIzquierda= load_bitmap("7.bmp",NULL);
    personajeAtaqueNI= load_bitmap("4.bmp",NULL);
    personajeAtaqueND= load_bitmap("9.bmp",NULL);
    personajeAtaqueFA= load_bitmap("AtaqueAlto.bmp",NULL);
    personajeAtaqueFB= load_bitmap("AtaqueBajo.bmp",NULL);


}

Jugador::~Jugador()
{
    //dtor
}

void Jugador::pintar()
{
    masked_blit(personajeAtaqueNI,screen,0,0,x,y,69,78);

}
