#include "arena.h"

arena::arena(const char *a,BITMAP *b)
{

    buffer=b;
    cargar(a);
    pintar();
}

void arena::cargar(char const *nombre)
{
    escenario=load_bmp(nombre,NULL);
}

void arena::pintar()
{
    blit(escenario,buffer,0,0,0,0,640,480);
}
