#include <iostream>
#include "allegro.h"

using namespace std;

int main()
{
    allegro_init();
    install_keyboard();
    //Pantalla//
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,300,0,0);
    BITMAP *buffer = create_bitmap(640,300);
    clear_to_color(buffer,0xFFFFFF);
    //Personje y Sprites//

    BITMAP *personajeArriba;
    BITMAP *personajeAbajo;
    BITMAP *personajeDerecha;
    BITMAP *personajeIzquierda;
    BITMAP *personajeAtaqueN;
    BITMAP *personajeAtaqueF;


    //LOCALIZACION DEL PERSONAJE//
    int x=200;
    int y=50;

    //ACCIONES DEL PERSONAJE//

    personajeArriba=  load_bitmap("0.bmp",NULL);
    personajeAbajo=  load_bitmap("1.bmp",NULL);
    personajeDerecha= load_bitmap("8.bmp",NULL);
    personajeIzquierda= load_bitmap("7.bmp",NULL);
    personajeAtaqueN= load_bitmap("4.bmp",NULL);
    personajeAtaqueF= load_bitmap("3.bmp",NULL);


    if (!personajeArriba) {
    cout<<("Error al cargar el bitmap");
}

    while(!key[KEY_ESC]) {
            blit(personajeAbajo, screen, 0, 0, x, y, 76, 78);
            if(key[KEY_UP]){
                y-=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeArriba,screen,0,0,x,y,76,78);
                rest(100);
            }
            if(key[KEY_LEFT]){
                x-=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeIzquierda,screen,0,0,x,y,76,78);
                rest(120);
            }
            if(key[KEY_DOWN]){
               y+=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAbajo,screen,0,0,x,y,76,78);
                rest(40);
            }

            if(key[KEY_RIGHT]){
                x+=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeDerecha,screen,0,0,x,y,76,78);
                rest(120);
            }

    }
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
