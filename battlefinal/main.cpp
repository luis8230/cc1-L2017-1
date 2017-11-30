#include <iostream>
#include <allegro.h>
#include "arena.h"
#include "musica.h"

using namespace std;
const int Anchura = 640;
const int Altura  = 480;

BITMAP *buffer;


void inicia_allegro(){
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,640,480,0,0);
    buffer=create_bitmap(Anchura,Altura);
}

int main()
{
    inicia_allegro();
    musica a;
    a.Musica("arena.mid");
    while (!key[KEY_ESC]){
        blit(buffer,screen,0,0,0,0,640,480);
        arena("arena.bmp",buffer);
        musica a;
        a.Musica("arena.mid");

    }
    readkey();
    destroy_bitmap(buffer);
    return 0;
}
END_OF_MAIN();
