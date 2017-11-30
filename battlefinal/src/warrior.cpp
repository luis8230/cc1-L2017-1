#include "warrior.h"

warrior::warrior(BITMAP *buffer)
{
    b=buffer;
}

void warrior::inicia()
{
    personaje=load_bmp("personaje.bmp",NULL);
    direccion=0;
    animacion=0;
    posx=320;
    posy=240;
}

void warrior::pinta()
{
    masked_blit(personaje,b,animacion*32,direccion*32,posx,posy,32,32);
}

void warrior::teclado()
{
    int ax=posx;
    int ay=posy;

    if(key[KEY_UP])
    {
        posy--;
        direccion=3;
    }
    if(key[KEY_DOWN])
    {
        posy++;
        direccion=0;
    }
    if(key[KEY_RIGHT])
    {
        posx++;
        direccion=2;
    }
    if(key[KEY_LEFT])
    {
        posx--;
        direccion=1;
    }
    if(ax!=posx||ay!=posy)
    {
        if(animacion>2){animacion=0;}
    }
    if(posx<0)posx=0;
    if(posx>640)posx=640;
    if(posy<0)posy=0;
    if(posy>480)posy=480;
}

void warrior::setpos(int nx,int ny)
{
    posx=nx;
    posy=ny;

}

