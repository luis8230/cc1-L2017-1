#include <iostream>
#include "allegro.h"
#include "escenario.h"
#include "musica.h"
#include "Entidad.h"       #include "Jugador.h"
#include "colision.h"
using namespace std;

const int Anchura = 800;
const int Altura  = 600;

BITMAP *buffer;

const int desplazo=4;


void inicio()
{
 allegro_init();
 install_keyboard();

 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, Anchura, Altura, 0, 0);

 buffer = create_bitmap(Anchura, Altura);
}

void pintar()
{
    blit(buffer, screen, 0, 0, 0, 0, Anchura, Altura);
}

int main()
{
   inicio();
    clear_to_color(buffer,0xFFFFFF);


    //LOCALIZACION DEL PERSONAJE y VARIABLES//
    int x=200;
    int y=50;
    int xf;
    bool ff= false;

    //ACCIONES DEL PERSONAJE//

    escenario casa("casa.bmp",buffer,"casa.bmp");

    musica a ("prueba.mid");
    Jugador p();

//Bucle y comandos//
    while(!key[KEY_ESC]) {

            casa.cargar("casa.bmp",buffer,"casa.bmp");
            casa.pintar(x,y);
            a.play();






    }
    readkey();
    destroy_bitmap(buffer);

    return 0;
}
END_OF_MAIN();
