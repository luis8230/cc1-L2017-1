#ifndef JUEGOCONTROL_H
#define JUEGOCONTROL_H


class juegocontrol
{
    BITMAP *buffer;
    BITMAP *MENU;

    int puntaje;
    int cambio;
    escenario arena;
    jugador a;
    // aca ponle lo que falte xdxdxdx
    public:
        juegocontrol();

        void pantallainicio(BITMAP a);
        void bucleprincipal();

};




#endif // JUEGOCONTROL_H
