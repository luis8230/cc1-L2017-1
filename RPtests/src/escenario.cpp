#include "escenario.h"

using namespace std;

escenario::escenario(char const *a, BITMAP *b)
{
   cargar(a,b);
   pintar();
}

void escenario::cargar(char const *x, BITMAP *y)
{
    buffer=y;
    esc=load_bmp(x,NULL);

}

void escenario::pintar()
{
    blit(esc,buffer,0,0,160,160,800,600);
}
