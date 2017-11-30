#include "bala.h"

bala::bala(int x,int y,BITMAP *b)
{
    buffer=b;
    posx=x;
    posy=y;

    proyectilh=create_bitmap(15,10);
    clear_to_color(proyectilh,0x000000);
    proyectilv=create_bitmap(10,15);
    clear_to_color(proyectilv,0x000000);
}

void bala::crearbala()
{
    if(key[KEY_SPACE]&&key[KEY_RIGHT])
    {
        while(posx<640)
        {
            blit(proyectilh,buffer,0,0,posx,posy,15,10);
            posx++;
        }

    }
    if(key[KEY_SPACE]&&key[KEY_LEFT])
    {
        while(posx>0)
        {
            blit(proyectilh,buffer,0,0,posx,posy,15,10);
            posx--;
        }

    }
    if(key[KEY_SPACE]&&key[KEY_UP])
    {
        while(posx<0)
        {
            blit(proyectilv,buffer,0,0,posx,posy,10,15);
            posy--;
        }

    }
    if(key[KEY_SPACE]&&key[KEY_DOWN])
    {
        while(posx<480)
        {
            blit(proyectilh,buffer,0,0,posx,posy,15,10);
            posx++;
        }

    }
}

