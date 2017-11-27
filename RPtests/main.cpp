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


/*
    //LOCALIZACION DEL PERSONAJE y VARIABLES//
    int x=200;
    int y=50;
    int xf;
    bool ff= false;


    EnemigoAr1= load_bitmap("Caballero1.bmp",NULL);
    EnemigoDe1= load_bitmap("Caballero1.bmp",NULL);
    EnemigoIz1= load_bitmap("Caballero1Flip.bmp",NULL);
    EnemigoAb1= load_bitmap("Caballero1Flip.bmp",NULL);
    EnemigoAt1= load_bitmap("Caballero2.bmp",NULL);


//enemigo CENTAURO ------2-----//

    EnemigoAr2= load_bitmap("Centauro1.bmp",NULL);
    EnemigoDe2= load_bitmap("Centauro1.bmp",NULL);
    EnemigoIz2= load_bitmap("Centauro1Flip.bmp",NULL);
    EnemigoAb2= load_bitmap("Centauro1Flip.bmp",NULL);
    EnemigoAt2= load_bitmap("Centauro2.bmp",NULL);

//enemigo AQUA----3-----//
    EnemigoAr3= load_bitmap("Aqua1.bmp",NULL);
    EnemigoDe3= load_bitmap("Aqua1.bmp",NULL);
    EnemigoIz3= load_bitmap("Aqua1Flip.bmp",NULL);
    EnemigoAb3= load_bitmap("Aqua1Flip.bmp",NULL);
    EnemigoAt3= load_bitmap("Aqua2.bmp",NULL);
//MAGIAS Y ANIMACIONES (seguir agregando)//
    FuegoPersonaje= load_bitmap("AtaqueFuerte.bmp",NULL);
    AtaqueOdin1= load_bitmap("FuegoJefe1.bmp",NULL);
    AtaqueOdin2= load_bitmap("FuegoJefe2.bmp",NULL);

*/

            Jugador a;
            Esencial d;
            NPC enemigo1("Aqua1.bmp");
            NPC enemigo2("caballero1.bmp");


    while(!key[KEY_ESC]) {
             clear_to_color(buffer,0xFFFFFF);

            escenario bosque("bosque.bmp",buffer);

            a.keyboard();
            pintar();
            a.pintar();
            enemigo1.pintar();

            enemigo2.pintar();

            rest(1);

   }
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
