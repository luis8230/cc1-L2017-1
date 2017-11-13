#include "escenario.h"

escenario::escenario(string e,string b,string c,int x,int y)
{
    cargar(e,b,c);
    pintar(x,y);
}

void escenario::cargar(string e,string b,string c)
{
    buffer=load_bmp(b,NULL);
    esc=load_bmp(e,NULL);
    colisiones=load_bmp(c,NULL);
}

void escenario::pintar(int x, int y)
{
    blit(esc,buffer,0,0,x,y,640,400);
}
