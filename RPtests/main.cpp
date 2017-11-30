#include <iostream>
#include "allegro.h"
#include "escenario.h"
#include "musica.h"
#include "Entidad.h"
#include "Jugador.h"
#include "Contrincante.h"
#include "bala.h"
#include "design.h"
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
   Portada(portada);
    inicia_audio(70,70);

    MIDI *fondo=load_midi("musica.mid");

    play_midi(fondo,1);
/*
   switch (cambio)
   {
   case 1:
       menu=load_bmp("menu.bmp",NULL);

       while(!key[KEY_ENTER])
       {
           clear_to_color(buffer,0xFFFFFF);
           blit(menu,buffer,0,0,0,0,640,400);

       }
       ++cambio;
       break;

   case 2:
        Jugador a;
        Esencial d;
        NPC enemigo1("Aqua1.bmp");
        NPC enemigo2("caballero1.bmp");


        while(!key[KEY_ESC]) {
            clear_to_color(buffer,0xFFFFFF);

            escenario arena("arena.bmp",buffer);

            a.keyboard();
            pintar();
            a.pintar();
            enemigo1.pintar();
            enemigo1.movimiento();
            enemigo2.pintar();
            enemigo2.movimiento();

            rest(1);

        }


   }

*/


            Jugador a;
            Contrincante b;


            a.posiciona(320,200);
            b.posiciona(200,200);

    while(!key[KEY_ESC]) {
             clear_to_color(buffer,0xFFFFFF);

             printfondo(espacio,buffer);
            escenario arena("arena.bmp",buffer);
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
