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

    BITMAP *personajeStillR;
    BITMAP *personajeRunR;
    BITMAP *personajeJumpR;
    BITMAP *personajeStillL;
    BITMAP *personajeRunL;
    BITMAP *personajeJumpL;
    BITMAP *personajeDownR;
    BITMAP *personajeDownL;
    BITMAP *personajeMoveR;
    BITMAP *personajeMoveL;


    //LOCALIZACION DEL PERSONAJE//
    int x=200;
    int y=50;

    //ACCIONES DEL PERSONAJE//
    personajeStillR=  load_bitmap("StillD.bmp",NULL);
    personajeJumpR=  load_bitmap("1.bmp",NULL);
    personajeMoveR=  load_bitmap("0.bmp",NULL);
    personajeStillL=  load_bitmap("2.bmp",NULL);
    personajeJumpL=  load_bitmap("3.bmp",NULL);
    personajeMoveL=  load_bitmap("4.bmp",NULL);
    personajeDownR= load_bitmap("bajoD.bmp",NULL);
    personajeDownL= load_bitmap("bajoI.bmp",NULL);
    personajeRunL= load_bitmap("SprintL.bmp",NULL);
    personajeRunR= load_bitmap("SprintD.bmp",NULL);


    if (!personajeStillR) {
    cout<<("Error al cargar el bitmap");
}


    while(!key[KEY_ESC]) {
            blit(personajeStillR, screen, 0, 0, x, y, 76, 78);
            if(key[KEY_UP]){
                y-=40;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeJumpR,screen,0,0,x,y,76,78);
                y+=40;
                rest(100);

            }
            if(key[KEY_LEFT]&&key[KEY_UP]){
                y-=40;
                x-=50;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeJumpL,screen,0,0,x,y,76,78);
                y+=40;
                rest(100);

            }
            if(key[KEY_RIGHT]&&key[KEY_UP]){
                y-=40;
                x+=50;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeJumpR,screen,0,0,x,y,76,78);
                y+=40;
                rest(100);

            }
            if(key[KEY_LEFT]){
                x-=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeMoveL,screen,0,0,x,y,76,78);
                rest(120);
            }
            if(key[KEY_DOWN]&&key[KEY_RIGHT]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeDownR,screen,0,0,x,y,76,78);
                rest(40);
            }
            if(key[KEY_DOWN]&&key[KEY_LEFT]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeDownL,screen,0,0,x,y,76,78);
                rest(40);
            }
            if(key[KEY_RIGHT]){
                x+=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeMoveR,screen,0,0,x,y,76,78);
                rest(120);
            }
            if(key[KEY_LEFT]&&key[KEY_SPACE]){
                x-=50;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeRunL,screen,0,0,x,y,76,78);
                rest(100);}
            if(key[KEY_RIGHT]&&key[KEY_SPACE]){
                x+=50;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeRunR,screen,0,0,x,y,76,78);
                rest(100);}





    }
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
