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
    BITMAP *personajeAtaqueNI;
    BITMAP *personajeAtaqueND;
    BITMAP *personajeAtaqueF;

    BITMAP *EnemigoAr1;
    BITMAP *EnemigoAb1;
    BITMAP *EnemigoIz1;
    BITMAP *EnemigoDe1;
    BITMAP *EnemigoAt1;

    //LOCALIZACION DEL PERSONAJE//
    int x=200;
    int y=50;

    //ACCIONES DEL PERSONAJE//
//Personaje Principal//
    personajeArriba=  load_bitmap("0.bmp",NULL);
    personajeAbajo=  load_bitmap("1.bmp",NULL);
    personajeDerecha= load_bitmap("8.bmp",NULL);
    personajeIzquierda= load_bitmap("7.bmp",NULL);
    personajeAtaqueNI= load_bitmap("4.bmp",NULL);
    personajeAtaqueND= load_bitmap("9.bmp",NULL);
    personajeAtaqueF= load_bitmap("3.bmp",NULL);
//Enemigo generico numero uno a poco no xD//
/*
    EnemigoAr1= load_bitmap("0.bmp",NULL);
    EnemigoDe1= load_bitmap("0.bmp",NULL);
    EnemigoIz1= load_bitmap("0.bmp",NULL);
    EnemigoAb1= load_bitmap("0.bmp",NULL);
    EnemigoAt1= load_bitmap("0.bmp",NULL);
*/

    if (!personajeArriba) {
    cout<<("Error al cargar el bitmap");
}

    while(!key[KEY_ESC]) {
            blit(buffer,screen,0,0,0,0,640,300);
            blit(personajeAbajo, screen, 0, 0, x, y, 76, 78);
            if(key[KEY_UP]){
                y-=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeArriba,screen,0,0,x,y,76,78);
                rest(200);
            }
            if(key[KEY_LEFT]){
                x-=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeIzquierda,screen,0,0,x,y,76,78);
                rest(200);
            }
            if(key[KEY_DOWN]){
               y+=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAbajo,screen,0,0,x,y,76,78);
                rest(200);
            }
            if(key[KEY_RIGHT]){
                x+=30;
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeDerecha,screen,0,0,x,y,76,78);
                rest(200);
            }
            if(key[KEY_SPACE]&&key[KEY_LEFT]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAtaqueNI,screen,0,0,x,y,76,78);
                rest(200);
            }
            if(key[KEY_SPACE]&&key[KEY_RIGHT]){
                blit(buffer,screen,0,0,0,0,640,300);
                blit(personajeAtaqueND,screen,0,0,x,y,76,78);
                rest(200);
            }

    }
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
