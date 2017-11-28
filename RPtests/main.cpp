#include <iostream>
#include "allegro.h"
#include "escenario.h"
#include "musica.h"
#include "Entidad.h"       #include "Jugador.h"
#include "colision.h"
#include "Esencial.h"
#include "NPC.h"
#include <time.h>
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

void pintar()
{
    blit(buffer, screen, 0, 0, 0, 0, Anchura, Altura);
}

int main()
{




   inicio();
   int cambio=1;
   BITMAP *menu;

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



/*
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

   }*/
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
