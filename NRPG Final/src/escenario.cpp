#include "escenario.h"

using namespace std;

escenario::escenario(char const *a, BITMAP *b, char const *c )
{
   cargar(a,b,c);
   pintar(x,y);
}

void escenario::cargar(char const *a, BITMAP *b,char const *c)
{
    buffer=b;
    esc=load_bmp(a,NULL);
    colisiones=load_bmp(c,NULL);

}

void escenario::pintar(int x,int y)
{
    blit(esc,buffer,0,0,x,y,800,600);
}
