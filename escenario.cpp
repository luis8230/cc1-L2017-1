#include "escenario.h"

escenario::escenario(string a, BITMAP b,string c,int x, int y )
{
   cargar(a,b,c);
   pintar(x,y);
}

void escenario::cargar(string a, BITMAP b,string c)
{
    buffer=b;
    esc=load_bmp(a,NULL);
    colisiones=load_bmp(c,NULL);

}

void escenario::pintar(int x,int y)
{
    blit(esc,buffer,0,0,x,y,640,400);
}
