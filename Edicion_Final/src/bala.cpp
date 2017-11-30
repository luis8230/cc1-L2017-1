#include "bala.h"

bala::bala(int x,int y,BITMAP *b)
{
    buffer=b;
    posx=x;
    posy=y;

    proyectilh=load_bitmap("Disparo.bmp",NULL);
;

    proyectilv=load_bitmap("Disparo.bmp",NULL);
;

}

void bala::crearbala()
{
    if(key[KEY_SPACE]&&key[KEY_RIGHT])
    {
        while(posx<640)
        {
            masked_blit(proyectilh,buffer,0,0,posx,posy,32,32);
            posx++;
        }

    }
    if(key[KEY_SPACE]&&key[KEY_LEFT])
    {
        while(posx>0)
        {
            masked_blit(proyectilh,buffer,0,0,posx,posy,32,32);
            posx--;
        }

    }
    if(key[KEY_SPACE]&&key[KEY_UP])
    {
        while(posx<0)
        {
            masked_blit(proyectilv,buffer,0,0,posx,posy,32,32);
            posy--;
        }

    }
    if(key[KEY_SPACE]&&key[KEY_DOWN])
    {
        while(posx<480)
        {
            masked_blit(proyectilh,buffer,0,0,posx,posy,32,32);
            posx++;
        }

    }
}

