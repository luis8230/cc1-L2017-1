#ifndef ESCENARIO_H
#define ESCENARIO_H


class escenario
{
    BITMAP *esc;
    BITMAP *colisiones;
    BITMAP *buffer;

    int x;
    int y;

    public:
        escenario(string e,BITMAP b,string c);


        void pintar(int x,int y);
        void cargar(string e, BITMAP b,string c);

};


#endif // ESCENARIO_H
