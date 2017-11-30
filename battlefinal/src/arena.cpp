#include "arena.h"

arena::arena(const char *a,BITMAP *b)
{
    buffer=b;
    escenario=load_bmp(a,NULL);
    pintar();
}

void arena::pintar()
{
    blit(escenario,buffer,0,0,0,0,640,480);
}
