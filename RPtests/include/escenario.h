#ifndef ESCENARIO_H
#define ESCENARIO_H
#include <allegro.h>
#include <string>

using namespace std;


class escenario
{
    BITMAP *esc;
    BITMAP *buffer;

    int x;
    int y;

    public:
        escenario(char const *e,BITMAP *b);
        ~escenario();


        void pintar();
        void cargar(char const *x, BITMAP *y);




};


#endif // ESCENARIO_H
