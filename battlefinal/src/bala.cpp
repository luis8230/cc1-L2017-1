#include "bala.h"

bala::bala(int x,int y,BITMAP *b)
{
    buffer=b;
    posx=x;
    posy=y;

    proyectilh=load_bitmap("balah.bmp",NULL);

    proyectilv=load_bmp("balav.bmp",NULL);

}

void bala::crearbala()
{
    if(key[KEY_SPACE]&&key[KEY_RIGHT])
    {
            dy=0;
            dx=+8;
            posx+=dx;
            posy+=dy;
            blit(proyectilh,buffer,0,0,posx,posy,12,6);

    }
    if(key[KEY_SPACE]&&key[KEY_LEFT])
    {
            dy=0;
            dx=-8;
            posx+=dx;
            posy+=dy;
            blit(proyectilh,buffer,0,0,posx,posy,12,6);


    }
    if(key[KEY_SPACE]&&key[KEY_UP])
    {

            dy=-8;
            dx=0;
            posx+=dx;
            posy+=dy;
            blit(proyectilh,buffer,0,0,posx,posy,6,12);



    }
    if(key[KEY_SPACE]&&key[KEY_DOWN])
    {

            dy=+8;
            dx=0;
            posx+=dx;
            posy+=dy;
            blit(proyectilh,buffer,0,0,posx,posy,6,12);


    }


}

