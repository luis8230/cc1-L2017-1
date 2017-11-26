#ifndef ESCENARIO_H
#define ESCENARIO_H
#include <allegro.h>
#include <string>

using namespace std;


class escenario
{
    BITMAP *esc;
    BITMAP *colisiones;
    BITMAP *buffer;

    int x;
    int y;

    public:
        escenario(char const *e,BITMAP *b, char const *c);


        void pintar(int x, int y);
        void cargar(char const *e, BITMAP *b,char const *c);




};


#endif // ESCENARIO_H
