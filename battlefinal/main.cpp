#include <iostream>
#include <allegro.h>
#include "arena.h"


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

int inicia_audio(int izquierda, int derecha){
    if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0) {
       allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
       return 1;
    }

	set_volume(izquierda, derecha);
}



int main()
{
    inicia_allegro();
    inicia_audio(70,70);

    MIDI *fondo=load_midi("musica.mid");

    play_midi(fondo,0);
    while (!key[KEY_ESC]){
        blit(buffer,screen,0,0,0,0,640,480);

        arena("arena.bmp",buffer);


    }
    readkey();
    destroy_bitmap(buffer);
    return 0;
}
END_OF_MAIN();
