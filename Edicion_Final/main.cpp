#include <iostream>
#include "allegro.h"
#include "escenario.h"
#include "musica.h"
#include "Entidad.h"
#include "Jugador.h"
#include "Contrincante.h"
#include "bala.h"
#include "design.h"
#include "arena.h"
using namespace std;

const int Anchura = 640;
const int Altura  = 400;
int Puntaje=0;

BITMAP *buffer;

const int desplazo=4;


void inicio()
{
 allegro_init();
 install_keyboard();

 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, Anchura, Altura, 0, 0);

 buffer = create_bitmap(Anchura, Altura);
 srand(time(NULL));
}

int inicia_audio(int izquierda, int derecha){
    if (install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL) != 0) {
       allegro_message("Error: inicializando sistema de sonido\n%s\n", allegro_error);
       return 1;
    }

	set_volume(izquierda, derecha);
}

void pintar()
{
    blit(buffer, screen, 0, 0, 0, 0, Anchura, Altura);
}

int main()
{




   inicio();
   int cambio=0;
    BITMAP *menu;
    BITMAP *portada =load_bitmap("menu.bmp",NULL);
    BITMAP *espacio =load_bitmap ("menu.bmp",NULL);
    BITMAP *cor=load_bmp("corazon.bmp",NULL);
    BITMAP *corvac=load_bmp("corazonvacio.bmp",NULL);



   Portada(portada);
    inicia_audio(70,70);

    MIDI *fondo=load_midi("musica.mid");

    play_midi(fondo,1);

            Jugador a;
            Contrincante b;


            a.posiciona(320,200);
            b.posiciona(200,200);

    while(!key[KEY_ESC]) {
             clear_to_color(buffer,0xFFFFFF);

             printfondo(espacio,buffer);

            arena combate("arena.bmp",buffer);

            masked_blit(cor,buffer,0,0,50,50,30,30);
            masked_blit(cor,buffer,0,0,80,50,30,30);
            masked_blit(cor,buffer,0,0,110,50,30,30);
            masked_blit(cor,buffer,0,0,560,50,30,30);
            masked_blit(cor,buffer,0,0,530,50,30,30);
            masked_blit(cor,buffer,0,0,500,50,30,30);

            b.keyboard();
            a.keyboard();
            pintar();
            a.pintar();
            b.pintar();


            rest(1);

   }
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
