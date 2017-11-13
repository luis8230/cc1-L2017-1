#ifndef ESCENARIO_H
#define ESCENARIO_H
#include <allegro.h>
#include <string>


class escenario
{
    BITMAP *esc;
    BITMAP *colisiones;
    BITMAP *buffer;

    int x;
    int y;

    public:
        escenario(string e,string b,string c);


        void pintar(int x,int y);
        void cargar(string e,string b,string c);



};

#endif // ESCENARIO_H
